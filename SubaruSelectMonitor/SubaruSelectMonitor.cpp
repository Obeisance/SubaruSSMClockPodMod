#include <SoftwareSerial.h>
#include "SubaruSelectMonitor.h"
#include "Arduino.h"
#include "DTC_arrays.h"


bool readSSM(SoftwareSerial &serialPort, uint8_t *dataBuffer, uint16_t bufferSize)
{
  //read in the response from the ECU
  bool success = readSSM_Fast(serialPort, dataBuffer, bufferSize, false);
  return success;
}

bool readSSM_Fast(SoftwareSerial &serialPort, uint8_t *dataBuffer, uint16_t bufferSize, bool ignoreZeroValues)
{
  //read in an SSM serial response packet, place the data bytes in the data buffer
  //and return a boolean value indicating whether the checksum failed
  uint16_t timeout = 100;//100 millisecond timeout for response
  uint32_t timerstart = millis();//start the timer
  boolean notFinished = true;//a flag to indicate that we are done
  boolean checksumSuccess = false;
  uint8_t dataSize = 0;
  uint8_t calcSum = 0;
  uint8_t packetIndex = 0;
  uint8_t nonZeroDataIndex = 0;

  Serial.print(F("Read Packet: [ "));
  while(millis() - timerstart <= timeout && notFinished)
  {
    if(serialPort.available() > 0)
    {
      uint8_t data = serialPort.read();
      Serial.print(data);
      Serial.print(F(" "));//if not printing data, be sure to delay to allow for more bytes to come in
      if(packetIndex == 0 && data == 128)
      {
        //0x80 or 128 marks the beginning of a packet
        packetIndex += 1;
        calcSum += data;
      }
      else if(packetIndex == 1 && data == 240)
      {
        //this byte indicates that the message recipient is the 'Diagnostic tool'
        packetIndex += 1;
        calcSum += data;
      }
      else if(packetIndex == 2 && data == 16)
      {
        //this byte indicates that the message sender is the ECU
        packetIndex += 1;
        calcSum += data;
      }
      else if(packetIndex == 3)
      {
        //this byte indicates the number of data bytes which follow
        dataSize = data;
        packetIndex += 1;
        calcSum += data;
      }
      else if(packetIndex == 4)
      {
        //I don't know what this byte is for
        packetIndex += 1;
        calcSum += data;
      }
      else if(packetIndex > 4 && packetIndex < (dataSize+4))
      {
        //this byte is data
        if(packetIndex - 5 < bufferSize && ignoreZeroValues == false)//make sure it fits into the buffer
        {
          dataBuffer[packetIndex - 5] = data;
        }
        else if(nonZeroDataIndex < bufferSize/2 && ignoreZeroValues == true && data != 0)
	   {
		//here we save only the non-zero values
	     dataBuffer[nonZeroDataIndex] = data;//save the data
	     dataBuffer[nonZeroDataIndex + bufferSize/2] = packetIndex;//save the packet-index of the data
	     nonZeroDataIndex += 1;
	   }
        packetIndex += 1;
        calcSum += data;
      }
      else if(packetIndex == dataSize + 4)
      {
        //this is the checksum byte
        if(data == calcSum)
        {
          //checksum was successful
          checksumSuccess = true;
        }
        else
        {
          Serial.print(F("Checksum fail "));
        }
        notFinished = false;//we're done now
        break;
      }
      timerstart = millis();//reset the timeout if we're not finished
    }
  }
  Serial.println(F("]"));
  if(notFinished)
  {
    Serial.println(F("Comm. timeout"));
  }
  return checksumSuccess;
}

//writes data over the software serial port
void writeSSM(SoftwareSerial &serialPort, uint8_t *dataBuffer, uint8_t bufferSize) {
  //this function needs to catch mistakes that I make in preparing 
  //the packets -> {128, 16, 240, #data, 168, cont. response flag, addr1,addr2,addr3,checksum} = 10 bytes, 5 of which are data
  dataBuffer[0] = 128;//begin packet
  dataBuffer[1] = 16;//to subaru ECU
  dataBuffer[2] = 240;//from diagnostic tool
  //number of data bytes include 3*(number of addresses), cont. response flag, and mode (address read)
  //this means that the header, to, from, #data, and checksum are not part.
  dataBuffer[3] = bufferSize - 5;//# data bytes
  dataBuffer[4] = 168;//single address read
  dataBuffer[5] = 0;//no continuous polling
  uint8_t sum = 0;
  Serial.print(F("Sending packet: [ "));
  for (uint8_t x = 0; x < bufferSize; x++) {
    if(x == bufferSize - 1 && sum != dataBuffer[x])
    {
      dataBuffer[x] = sum;//fix the checksum in the data buffer
    }
    else
    {
      sum += dataBuffer[x];//build the checksum
    }
    serialPort.write(dataBuffer[x]);
    Serial.print(dataBuffer[x]);
    Serial.print(F(" "));
  }
  Serial.println(F("]"));
}

/*writes data over the software serial port
the &serialPort passes a reference to the external
object so that we can control it outside of the function*/
void writeSSM_Fast(SoftwareSerial &serialPort, uint8_t data[], uint8_t length) {
  
  for (uint8_t x = 0; x < length; x++) {
    serialPort.write(data[x]);
  }
  
}

uint8_t serialCallSSM(SoftwareSerial &serialPort, uint8_t *sendDataBuffer, uint16_t sendBufferSize, uint8_t *receiveDataBuffer, uint16_t receiveBufferSize, uint8_t attempts)
{
  //this function performs the call and response routine for 
  //exchanging serial data with the Subaru ECU via SSM
  //it sends a message and awaits a response, resending the 
  //message if we reach timeout or if the checksum failed
  //it stops trying the data exchange if 10 failures occur and 
  //it outputs the number of attempts it failed to send data
  //input: handle to software serial pins
  //  buffer with outgoing data and length of buffer
  //  buffer for received data (not the whole packet), and length of buffer
  //  the initial value for a counter of failed attempts

  writeSSM(serialPort, sendDataBuffer, sendBufferSize);//send the message
  bool success = readSSM(serialPort, receiveDataBuffer, receiveBufferSize);//receive the response
  uint8_t newAttempt = 0;
  
  if(!success && attempts < 10)
  {
    Serial.println(F("Packet exchange failed, trying again... "));
    newAttempt = serialCallSSM(serialPort, sendDataBuffer, sendBufferSize, receiveDataBuffer, receiveBufferSize, attempts + 1);
  }
  newAttempt += attempts;
  
  return newAttempt;
}

//*************************************************************
//now for DTC reading functions
String checkForCEL(SoftwareSerial &serialPort, bool &MILon)
{
  //first, we populate packets to send to the ECU.
  //These request the bytes where DTC flags are stored.
  uint8_t readDTCTemp1[] = {128, 16, 240, 98, 168, 0, 0, 0, 142, 0, 0, 143, 0, 0, 144, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 148, 0, 0, 149, 0, 0, 150, 0, 0, 151, 0, 0, 152, 0, 0, 153, 0, 0, 154, 0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 162, 0, 0, 163, 0, 0, 164, 0, 0, 165, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0, 0, 169, 0, 0, 170, 0, 0, 171, 0, 0, 172, 0, 0, 173, 58};
  uint8_t readDTCTemp2[] = {128, 16, 240, 68, 168, 0, 0, 0, 240, 0, 0, 241, 0, 0, 242, 0, 0, 243, 0, 1, 35, 0, 1, 36, 0, 1, 37, 0, 1, 38, 0, 1, 39, 0, 1, 40, 0, 1, 41, 0, 1, 42, 0, 1, 80, 0, 1, 81, 0, 1, 82, 0, 1, 83, 0, 1, 84, 0, 1, 96, 0, 1, 97, 0, 1, 98, 0, 1, 99, 0, 1, 100, 252};
  uint8_t readDTCMem1[] = {128, 16, 240, 98, 168, 0, 0, 0, 174, 0, 0, 175, 0, 0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 179, 0, 0, 180, 0, 0, 181, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 187, 0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 0, 197, 0, 0, 198, 0, 0, 199, 0, 0, 200, 0, 0, 201, 0, 0, 202, 0, 0, 203, 0, 0, 204, 0, 0, 205, 58};
  uint8_t readDTCMem2[] = {128, 16, 240, 68, 168, 0, 0, 0, 244, 0, 0, 245, 0, 0, 246, 0, 0, 247, 0, 1, 43, 0, 1, 44, 0, 1, 45, 0, 1, 46, 0, 1, 47, 0, 1, 48, 0, 1, 49, 0, 1, 50, 0, 1, 85, 0, 1, 86, 0, 1, 87, 0, 1, 88, 0, 1, 89, 0, 1, 101, 0, 1, 102, 0, 1, 103, 0, 1, 104, 0, 1, 105, 126};

//Next, we prepare some DTC byte and flag index variables
  uint8_t DTC[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int DTCFlag1[][2] = {{ -1, -1}, { -1, -1}, { -1, -1}, { -1, -1}, { -1, -1}, { -1, -1}, { -1, -1}, { -1, -1}, { -1, -1}, { -1, -1}};
  int DTCFlag2[][2] = {{ -1, -1}, { -1, -1}, { -1, -1}, { -1, -1}, { -1, -1}, { -1, -1}, { -1, -1}, { -1, -1}, { -1, -1}, { -1, -1}};

  
  Serial.println(F("Reading CELs"));

  writeSSM_Fast(serialPort, readDTCTemp1, 103);
  readSSM_Fast(serialPort, DTC, 10, true);
  //readECU(DTC, 10, true);//old function

  if (DTC[0] != 0) {
    DTCread(DTC, 10, DTCFlag1, 10, 1);
    resetDTCArray(DTC, 10);
    MILon = true;
  }

  writeSSM_Fast(serialPort, readDTCTemp2, 73);
  readSSM_Fast(serialPort, DTC, 10, true);
  //readECU(DTC, 10, true);

  if (DTC[0] != 0) {
    DTCread(DTC, 10, DTCFlag2, 10, 2);
    resetDTCArray(DTC, 10);
    MILon = true;
  }

  writeSSM_Fast(serialPort, readDTCMem1, 103);
  readSSM_Fast(serialPort, DTC, 10, true);
  //readECU(DTC, 10, true);

  if (DTC[0] != 0) {
    DTCread(DTC, 10, DTCFlag1, 10, 1);
    resetDTCArray(DTC, 10);
    MILon = true;
  }

  writeSSM_Fast(serialPort, readDTCMem2, 73);
  readSSM_Fast(serialPort, DTC, 10, true);
  //readECU(DTC, 10, true);

  if (DTC[0] != 0) {
    DTCread(DTC, 10, DTCFlag2, 10, 2);
    resetDTCArray(DTC, 10);
    MILon = true;
  }

  //if we read in a MIL, we should look up the code
  //and prepare a string with the code to return.
  String DTCcodes = "";
  if (MILon == true)
  {
    Serial.println(F("Displaying CELs"));
    String DTC1string = DTCupdate(DTCFlag1, 10, 1);
    String DTC2string = DTCupdate(DTCFlag2, 10, 2);
    DTCcodes.concat(DTC1string);
    DTCcodes.concat(DTC2string);
  }
  return DTCcodes;
}


//input the DTC flags, with half the array as the DTC flag number and the other half as the packet index (address)
//This function will change DTCs[] to include the error code addresses: [address][byte], but not overwrite or duplicate values
void DTCread(uint8_t flags[], uint8_t flagLength, int DTCs[][2], int DTCsLength, int DTCTableNumber)
{
  int DTCconvoluted = 0;
  int DTCaddr = 0;
  int index = 0;
  bool duplicate = false;

  for (int plus = 0; plus < DTCsLength; plus++);
  {
    if (DTCs[index][0] != -1)
      index++;
  }

  for (uint8_t i = 0; i < flagLength / 2; i++)
  {
    if (flags[i] != 0)
    {
      DTCconvoluted = flags[i];
      DTCaddr = flags[i + flagLength / 2] - 5;
      for (int f = 0; f < 8; f++)
      {
        if (bitRead(DTCconvoluted, f) != 0 && index < DTCsLength)
        {
          //loop to check if this value is already present in DTCs
          for (int pres = 0; pres < DTCsLength; pres++)
          {
            if (DTCs[pres][0] == DTCaddr && DTCs[pres][1] == f)
            {
              duplicate = true;
            }
          }
          if (duplicate == false)
          {
            DTCs[index][0] = DTCaddr;
            DTCs[index][1] = f;
            index++;
          }
          duplicate = false;
        }
      }
    }
  }
}


//This function takes in an array of DTC addresses, and reads off the string values from PROGMEM
//Finally, it displays them on the serial monitor. Values of '-1' are ignored. DTCTableNumber is 1 or 2.
String DTCupdate(int DTCs[][2], byte DTCsLength, byte DTCTableNumber)
{
  char buffer[5];
  byte DTCcount = 0;
  String DTCstring = "";
  

  for (byte a = 0; a < DTCsLength; a++)
  {
    byte b = DTCs[a][0];
    byte c = DTCs[a][1];
    if (DTCs[a][0] != -1 && DTCTableNumber == 1)
    {
      strcpy_P(buffer, (char*)pgm_read_word(&(DTCset1[b][c])));
      Serial.println(buffer);
      DTCstring.concat(buffer);
      DTCstring.concat(" ");

      DTCcount += 6;
    }
    else if (DTCs[a][0] != -1 && DTCTableNumber == 2)
    {
      strcpy_P(buffer, (char*)pgm_read_word(&(DTCset2[b][c])));
      Serial.println(buffer);
      DTCstring.concat(buffer);
      DTCstring.concat(" ");

      DTCcount += 6;
    }
  }
return DTCstring;
}

void resetDTCArray(uint8_t*DTC, uint8_t DTCarrayLength)
{
  for (uint8_t x = 0; x < DTCarrayLength; x++)
  {
    DTC[x] = 0;
  }
}

//end DTC reading functions ***********************