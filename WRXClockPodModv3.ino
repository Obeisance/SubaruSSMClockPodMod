#include <Wire.h>
#include <SoftwareSerial.h>
#include "RTClib.h"
#include "DTC_arrays.h"

/*
This code should allow for interfacing with Subaru ECUs
The intention is to pull DTC's and display them on an
LCD. There will also be functionality to display the time
from a clock module and to adjust the time.

Some of the clock code came from the RTClib ds1307 example
*/

SoftwareSerial sendSerial = SoftwareSerial(10, 11); //Rx, Tx
SoftwareSerial lcd = SoftwareSerial(8, 9);
RTC_DS1307 rtc;
//int mem = freeRam();

const char phrase1[] PROGMEM = "     Subaru        Impossibru   ";
const char phrase2[] PROGMEM = "Sit down shut up  and hang on   ";
const char phrase3[] PROGMEM = "Scubaru: beware    deep water   ";
const char phrase4[] PROGMEM = "Guess what will    fail today   ";
const char phrase5[] PROGMEM = "    ur a bus                    ";
const char phrase6[] PROGMEM = "Prepare ship for ludicrous speed";
const char phrase7[] PROGMEM = "60% of time it  works every time";
const char phrase8[] PROGMEM = "  Understeers      like a pig   ";
const char phrase9[] PROGMEM = "The password is    'password'   ";
const char phrase10[] PROGMEM = "      Stop.        Hammer time  ";
const char phrase11[] PROGMEM = "vtec just kicked      in yo     ";
const char phrase12[] PROGMEM = " When in doubt,     flat out    ";
const char phrase13[] PROGMEM = "   See no Evo,    hear no Evo...";
const char phrase14[] PROGMEM = "   Cool story,         bro      ";
const char phrase15[] PROGMEM = "  What is that  rattling sound?!";
const char phrase16[] PROGMEM = "     Made in     Australia -_-  ";
const char phrase17[] PROGMEM = "  Power Level:   It's over 9000!";
const char phrase18[] PROGMEM = "Do a barrel roll                ";
const char phrase19[] PROGMEM = "     (-_-)zzz                   ";
const char phrase20[] PROGMEM = "   Drive free        or die     ";
const char phrase21[] PROGMEM = "   Hello Dave                   ";
const char phrase22[] PROGMEM = " It's dangerous   to go alone!  ";
const char phrase23[] PROGMEM = " All your base  are belong to us";
const char phrase24[] PROGMEM = "   It's super      effective!   ";
const char phrase25[] PROGMEM = " After testing   there is cake  ";

PGM_P const phraseSet[] PROGMEM = {phrase1, phrase2, phrase3, phrase4,
                                   phrase5, phrase6, phrase7, phrase8, phrase9, phrase10, phrase11, phrase12,
                                   phrase13, phrase14, phrase15, phrase16, phrase17, phrase18, phrase19,
                                   phrase20, phrase21, phrase22, phrase23, phrase24, phrase25
                                  };

//ECU variables
//byte ecuInit[6] = {128,16,240,1,191,64};
byte readDTCTemp1[] = {128, 16, 240, 98, 168, 0, 0, 0, 142, 0, 0, 143, 0, 0, 144, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 148, 0, 0, 149, 0, 0, 150, 0, 0, 151, 0, 0, 152, 0, 0, 153, 0, 0, 154, 0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 162, 0, 0, 163, 0, 0, 164, 0, 0, 165, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0, 0, 169, 0, 0, 170, 0, 0, 171, 0, 0, 172, 0, 0, 173, 58};
byte readDTCTemp2[] = {128, 16, 240, 68, 168, 0, 0, 0, 240, 0, 0, 241, 0, 0, 242, 0, 0, 243, 0, 1, 35, 0, 1, 36, 0, 1, 37, 0, 1, 38, 0, 1, 39, 0, 1, 40, 0, 1, 41, 0, 1, 42, 0, 1, 80, 0, 1, 81, 0, 1, 82, 0, 1, 83, 0, 1, 84, 0, 1, 96, 0, 1, 97, 0, 1, 98, 0, 1, 99, 0, 1, 100, 252};
byte readDTCMem1[] = {128, 16, 240, 98, 168, 0, 0, 0, 174, 0, 0, 175, 0, 0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 179, 0, 0, 180, 0, 0, 181, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 187, 0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 0, 197, 0, 0, 198, 0, 0, 199, 0, 0, 200, 0, 0, 201, 0, 0, 202, 0, 0, 203, 0, 0, 204, 0, 0, 205, 58};
byte readDTCMem2[] = {128, 16, 240, 68, 168, 0, 0, 0, 244, 0, 0, 245, 0, 0, 246, 0, 0, 247, 0, 1, 43, 0, 1, 44, 0, 1, 45, 0, 1, 46, 0, 1, 47, 0, 1, 48, 0, 1, 49, 0, 1, 50, 0, 1, 85, 0, 1, 86, 0, 1, 87, 0, 1, 88, 0, 1, 89, 0, 1, 101, 0, 1, 102, 0, 1, 103, 0, 1, 104, 0, 1, 105, 126};
byte pollECUbytes[] = {128, 16, 240, 20, 168, 0, 2, 24, 32, 2, 24, 33, 0, 0, 18, 0, 0, 32, 0, 0, 14, 0, 0, 15, 0}; //response [mrp,mrp,iat,idc,idc,idc]
byte pollECUshort[] = {128, 16, 240, 17, 168, 0, 2, 24, 32, 2, 24, 33, 0, 0, 32, 0, 0, 14, 0, 0, 15, 235}; //response [mrp,mrp,idc,idc,idc]

int ECUbytes[6] = {0, 0, 0, 0, 0, 0};
int DTC[10] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
int DTCFlag1[][2] = {{ -1, -1}, { -1, -1}, { -1, -1}, { -1, -1}, { -1, -1}, { -1, -1}, { -1, -1}, { -1, -1}, { -1, -1}, { -1, -1}};
int DTCFlag2[][2] = {{ -1, -1}, { -1, -1}, { -1, -1}, { -1, -1}, { -1, -1}, { -1, -1}, { -1, -1}, { -1, -1}, { -1, -1}, { -1, -1}};

//Variables for ECU communication
boolean ecuPollCheck = true;
boolean MILon = false;
boolean scanning = true;
byte breakScanning = 0;
int IATbyte = 0;
int IDCbyteIPW = 0;
int IDCbyteRPM1 = 0;
int IDCbyteRPM2 = 0;
int MRPbyteAtm = 0;
int MRPbyteMani = 0;

//Timekeeping variables
byte minTimeNext = 0;
//unsigned long time;


void setup()
{
  Serial.begin(57600); //for diagnostics
  lcd.begin(57600); //somehow, this must begin before sendSerial or else ECU comms fail
  sendSerial.begin(4800); //SSM uses 4800 8N1 baud rate

  //one time turn off the lcd splash screen
  //setSplashScreen();

  //one time adjust backlight to max
  setBacklight(255);


  //one time change the LCD baud rate to 57600
  //lcd.write(0x81);
  //lcd.write(9);
  //delay(1000);

  Wire.begin();
  rtc.begin();
  lcdStartupMessage();

  //in order to update the time without pulling the battery, uncomment this code
  //upload, then recomment the code and re-upload the code
  //rtc.adjust(DateTime(__DATE__, __TIME__));
  if (! rtc.isrunning()) {
    Serial.println(F("RTC is NOT running!"));
    // following line sets the RTC to the date & time this sketch was compiled
    rtc.adjust(DateTime(__DATE__, __TIME__));
    setLCDCursor(0);
    lcd.print(F("repl. clk batt., re-upload code"));
    delay(10000);
    clearDisplay();

  }

  //diagnostic: check free ram
  /*Serial.print(F("ram before setup: "));
  Serial.println(mem);
  mem = freeRam();
  Serial.print(F("ram in setup: "));
  Serial.println(mem);*/


  //scan for CELs
  checkForCEL();
}



void loop()
{
  /*mem = freeRam();
  Serial.print(F("ram in main: "));
  Serial.println(mem);*/
  //time = micros();
  //Serial.println(time);


  if (scanning == true)
  {
    //We'll first get the clock information onto the first 5 LCD spots
    if (updateTime())
    {
      //then, if the time has changed, poll and read the ECU including the temperature
      if (!scanWithTemp())
      {
        //if the checksum fails more than 10 times in the same minute, stop scanning
        if (scanBreaker())
        {
          scanning = false;
          sweepClearLCD();
        }
      }
    }
    else
      //speed up things by not asking for the temperature reading
    {
      //time counters to optimize the code
      //time = micros();
      //Serial.println(time);
      if (!scanWithoutTemp())
      {
        //if the checksum fails more than 10 times in the same minute, stop scanning
        if (scanBreaker())
        {
          scanning = false;
          sweepClearLCD();
        }
      }

    }

  }
  else
  {
    updateTime();
  }

}

boolean scanBreaker()
{
  if (!updateTime())
    breakScanning++;
  else
    breakScanning = 0;

  if (breakScanning >= 10)
    return true;
  else
    return false;
}

/* returns the 8 least significant bits of an input byte*/
byte CheckSum(byte sum) {
  byte counter = 0;
  byte power = 1;
  for (byte n = 0; n < 8; n++) {
    counter += bitRead(sum, n) * power;
    power = power * 2;
  }
  return counter;
}

boolean scanWithTemp()
{
  //Serial.println(F("polling ecu"));
  writeSSM(pollECUbytes, 25, sendSerial);
  if (readECU(ECUbytes, 6, false))
  {
    //if the checksum passes, carry on as normal

    //interpret and display the ECU data on the LCD
    MRPbyteAtm = ECUbytes[0];
    //Serial.print(F("MRPbyteAtm: "));
    //Serial.println(MRPbyteAtm);
    MRPbyteMani = ECUbytes[1];
    //Serial.print(F("MRPbyteMani: "));
    //Serial.println(MRPbyteMani);
    IATbyte = ECUbytes[2];
    //Serial.print(F("IATbyte: "));
    //Serial.println(IATbyte);
    IDCbyteIPW = ECUbytes[3];
    //Serial.print(F("IDCbyteIPW: "));
    //Serial.println(IDCbyteIPW);
    IDCbyteRPM1 = ECUbytes[4];
    //Serial.print(F("IDCbyteRPM1: "));
    //Serial.println(IDCbyteRPM1);
    IDCbyteRPM2 = ECUbytes[5];
    //Serial.print(F("IDCbyteRPM2: "));
    //Serial.println(IDCbyteRPM2);

    int IAT = computeIAT(IATbyte);
    updateTemp(IAT);

    int IDC = computeIDC(IDCbyteIPW, IDCbyteRPM1, IDCbyteRPM2);
    updateIDC(IDC);

    float MRP = computeMRP(MRPbyteAtm, MRPbyteMani);
    updateBoost(MRP);

    return true;
  }
  else
  {
    return false;
  }
}

boolean scanWithoutTemp()
{
  writeSSM(pollECUshort, 22, sendSerial);
  if (readECU(ECUbytes, 6, false))
  {
    //interpret and display the ECU data on the LCD
    MRPbyteAtm = ECUbytes[0];
    //Serial.print(F("MRPbyteAtm: "));
    //Serial.println(MRPbyteAtm);
    MRPbyteMani = ECUbytes[1];
    //Serial.print(F("MRPbyteMani: "));
    //Serial.println(MRPbyteMani);
    IDCbyteIPW = ECUbytes[2];
    //Serial.print(F("IDCbyteIPW: "));
    //Serial.println(IDCbyteIPW);
    IDCbyteRPM1 = ECUbytes[3];
    //Serial.print(F("IDCbyteRPM1: "));
    //Serial.println(IDCbyteRPM1);
    IDCbyteRPM2 = ECUbytes[4];
    //Serial.print(F("IDCbyteRPM2: "));
    //Serial.println(IDCbyteRPM2);

    int IDC = computeIDC(IDCbyteIPW, IDCbyteRPM1, IDCbyteRPM2);
    updateIDC(IDC);

    float MRP = computeMRP(MRPbyteAtm, MRPbyteMani);
    updateBoost(MRP);
    return true;
  }
  else
  {
    return false;
  }
}


//one time check for CELs during startup
void checkForCEL()
{
  Serial.println(F("Reading CELs"));

  writeSSM(readDTCTemp1, 103, sendSerial);
  readECU(DTC, 10, true);

  if (DTC[0] != -1) {
    DTCread(DTC, 10, DTCFlag1, 10, 1);
    resetDTCArray();
    MILon = true;
  }

  writeSSM(readDTCTemp2, 73, sendSerial);
  readECU(DTC, 10, true);

  if (DTC[0] != -1) {
    DTCread(DTC, 10, DTCFlag2, 10, 2);
    resetDTCArray();
    MILon = true;
  }

  writeSSM(readDTCMem1, 103, sendSerial);
  readECU(DTC, 10, true);

  if (DTC[0] != -1) {
    DTCread(DTC, 10, DTCFlag1, 10, 1);
    resetDTCArray();
    MILon = true;
  }

  writeSSM(readDTCMem2, 73, sendSerial);
  readECU(DTC, 10, true);

  if (DTC[0] != -1) {
    DTCread(DTC, 10, DTCFlag2, 10, 2);
    resetDTCArray();
    MILon = true;
  }

  delay(1000);
  sweepClearLCD();

  if (MILon == true)
  {
    Serial.println(F("Displaying CELs"));
    DTCupdate(DTCFlag1, 10, 1);
    delay(2000);
    DTCupdate(DTCFlag2, 10, 2);
    delay(2000);
    scanning = false;
  }

}




/*writes data over the software serial port
the &digiSerial passes a reference to the external
object so that we can control it outside of the function*/
void writeSSM(byte data[], byte length, SoftwareSerial &digiSerial) {
  //Serial.println(F("Sending packet... "));
  for (byte x = 0; x < length; x++) {
    digiSerial.write(data[x]);
  }
  //Serial.println(F("done sending."));
}

/*LCD Functions borrowed from: https://www.sparkfun.com/tutorials/289
Some other character options:
0×0D, will advance the cursor to the next row
0×09, will advance the cursor 5 places
0×08, will operate as a standard backspace
*/
void setBacklight(byte brightness)
{
  lcd.write(0x80);  // send the backlight command, decimal 128
  lcd.write(brightness);  // send the brightness value 0-255
}

void clearDisplay()
{
  lcd.write(0xFE);  // send the special command
  lcd.write(0x01);  // send the clear screen command
}

void setLCDCursor(byte cursor_position)
{
  lcd.write(0xFE);  // send the special command
  lcd.write(0x80);  // send the set cursor command
  lcd.write(cursor_position);  // send the cursor position 0-31, 0 is top left
}

void setSplashScreen()
{
  lcd.write(0xFE);  // send the special command
  lcd.write(0x1E);  // toggle the splash screen appearance
}

void lcdStartupMessage()
{
  Serial.println(F("Displaying Welcome Message"));
  clearDisplay();


  DateTime now = rtc.now();
  byte phraseSeed = now.second();
  byte animationSeed = now.minute();

  randomSeed(phraseSeed);
  long phrasePick = random(0, 25);
  randomSeed(animationSeed);
  long animationPick = random(0, 4);
  char buffer[32];

  strcpy_P(buffer, (char*)pgm_read_word(&(phraseSet[phrasePick])));
  Serial.println(buffer);

  if (animationPick == 0) {
    for (byte x = 0; x < 16; x++)
    {
      setLCDCursor(x);
      lcd.print(buffer[x]);
      delay(30);
      setLCDCursor(31 - x);
      lcd.print(buffer[31 - x]);
      delay(30);
    }
  }
  if (animationPick == 1) {
    for (byte x = 0; x < 8; x++)
    {
      setLCDCursor(x + 8);
      lcd.print(buffer[x + 8]);
      delay(30);
      setLCDCursor(x + 24);
      lcd.print(buffer[x + 24]);
      delay(30);
      setLCDCursor(7 - x);
      lcd.print(buffer[7 - x]);
      delay(30);
      setLCDCursor(23 - x);
      lcd.print(buffer[23 - x]);
      delay(30);
    }
  }
  if (animationPick == 2) {
    int x[32] = {12, 16, 21, 3, 17, 4, 15, 22, 11, 24, 25, 5, 14, 1, 31, 18, 2, 6, 30, 29,
                 20, 23, 7, 26, 9, 28, 8, 10, 13, 19, 27, 0
                };
    for (int y = 0; y < 32; y++) {
      setLCDCursor(x[y]);
      lcd.print(buffer[x[y]]);
      delay(30);
    }
  }
  if (animationPick == 3) {
    for (int x = 15; x > -1; x--)
    {
      setLCDCursor(x);
      lcd.print(buffer[x]);
      delay(30);
    }
    for (int x = 16; x < 32; x++)
    {
      setLCDCursor(x);
      lcd.print(buffer[x]);
      delay(30);
    }
  }
}

void sweepClearLCD()
{
  for (int x = 0; x < 16; x++) {
    setLCDCursor(x);
    lcd.print((char)255); //0xFF, the filled space character
    delay(30);
    if (x > 0) {
      setLCDCursor(x + 15);
      lcd.print((char)255); //0xFF, the filled space character
    }
    setLCDCursor(x);
    lcd.print(F(" "));
    delay(30);
    if (x > 0) {
      setLCDCursor(x + 15);
      lcd.print(F(" "));
    }
  }
}
/*********************************************************/

boolean updateTime()
{
  DateTime now = rtc.now();
  byte hourTime = now.hour();
  byte minTime = now.minute();

  if (minTimeNext != minTime) {
    clearDisplay();
    setLCDCursor(0);
    if (hourTime > 12) {
      hourTime = hourTime - 12;
      lcd.print(F(" "));
    }
    lcd.print(hourTime);
    Serial.print(hourTime);
    lcd.print(':');
    Serial.print(':');
    if (minTime < 10)
      lcd.print(F("0"));
    lcd.print(minTime);
    lcd.print(F(" "));
    Serial.println(minTime);
    minTimeNext = minTime;
    return true;
  }
  else
  {
    return false;
  }

}

void updateBoost(float boostValue)
{
  if (boostValue > 15)
    boostValue = 15;
  //display the boost value on the lower left of the lcd
  setLCDCursor(16);
  if (boostValue >= 0.0 && boostValue < 10.0)
  {
    lcd.print(F(" "));
    lcd.print(boostValue, 1); //print one digit of the float value
    //Serial.print(boostValue);
  }
  else
  {
    lcd.print(boostValue, 1);
    //Serial.print(boostValue);
  }
  setLCDCursor(20);
  lcd.print(F("psi"));
  //Serial.println(F("psi"));
  /*display graphical gauge on lower right,
  using blocks "0xFF" and a bar "0x7C" at 0
  0xFE clears a cell*/
  setLCDCursor(23);
  lcd.print(F("         ")); //clear the plot
  int value = ((int)boostValue + 11) / 3;
  for (int y = 0; y <= value; y++)
  {
    setLCDCursor(31 - y);
    lcd.print((char)255); //0xFF, the filled space character
  }
  setLCDCursor(28);
  lcd.print((char)124);  //0x7C, the | character
}

void updateTemp(int tempValue)
{
  setLCDCursor(6);
  if (tempValue >= 0)
    lcd.print(F(" "));
  lcd.print(tempValue);
  lcd.print((char)223); //degree sign
  lcd.print(F("C "));
  //Serial.print(tempValue);
  //Serial.println(F("C"));
}

void updateIDC(int idcValue)
{
  setLCDCursor(12);
  if (idcValue < 100)
  {
    lcd.print(F(" "));
  }
  if (idcValue < 10)
  {
    lcd.print(F(" "));
  }
  lcd.print(idcValue);
  lcd.print((char)37); //percent character
  //Serial.print(idcValue);
  //Serial.println(F("%"));
}


/* *********************************************************
 Packets must follow this structure:

0x80
Destination byte
Source byte
Data size byte
data..

Checksum byte

Data size byte specities the number of data bytes in
the packet

Checksum byte is the 8 least significant bits of the
sum of every packet byte (including the header)

see: http://www.romraider.com/RomRaider/SsmProtocol
************************************************************ */
//this will change the values in dataArray, populating them with values respective of the poll array address calls
boolean readECU(int* dataArray, byte dataArrayLength, boolean nonZeroes)
{
  byte data = 0;
  boolean isPacket = false;
  byte sumBytes = 0;
  byte checkSumByte = 0;
  byte dataSize = 0;
  byte bytePlace = 0;
  byte zeroesLoopSpot = 0;
  byte loopLength = 10;
  for (byte j = 0; j < loopLength; j++)
  {
    //mem = freeRam();
    //Serial.print(F("ram in readECU: "));
    //Serial.println(mem);

    data = sendSerial.read();
    Serial.print(F("data: ")); //diagnostic: shows any data stream
    Serial.println(data);  //somehow, the delay? from these diagnostic lines allows the program to work..

    if (data == 128 && dataSize == 0) { //0x80 or 128 marks the beginning of a packet
      isPacket = true;
      //Serial.println(F("Begin Packet"));
      j = 0;
    }

    //terminate function and return false if no response is detected
    if (j == (loopLength - 1) && isPacket != true)
    {
      //Serial.println(F("booted 1"));
      return false;
    }

    if (isPacket == true && data != -1) {
      //Serial.println(data); // for debugging: shows in-packet data

      if (bytePlace == 3) { // how much data is coming
        dataSize = data;
        //Serial.print(F("dataSize: "));
        //Serial.println(dataSize);
        loopLength = data + 6;
      }

      if (bytePlace > 4 && bytePlace - 5 < dataArrayLength && nonZeroes == false)
      {
        dataArray[bytePlace - 5] = data;
      }
      else if (bytePlace > 4 && zeroesLoopSpot < dataArrayLength / 2 && nonZeroes == true && data != 0 && bytePlace < dataSize + 4)
      {
        dataArray[zeroesLoopSpot] = data;
        dataArray[zeroesLoopSpot + (dataArrayLength / 2)] = bytePlace;
        zeroesLoopSpot++;
      }

      bytePlace += 1; //increment bytePlace

      //once the data is all recieved, checksum and re-set counters
      if (bytePlace == dataSize + 5) {
        checkSumByte = CheckSum(sumBytes);  //the 8 least significant bits of sumBytes

        if (data != checkSumByte) {
          //Serial.println(F("checksum error"));
          return false;
        }

        isPacket = false;
        sumBytes = 0;
        bytePlace = 0;
        checkSumByte = 0;
        dataSize = 0;
        //Serial.println(F("End Packet"));
        return true;
      }
      else {
        sumBytes += data; // this is to compare with the checksum byte
        //Serial.print(F("sum: "));
        //Serial.println(sumBytes);
      }
    }
  }
}

//input the DTC flags, with half the array as the DTC flag number and the other half as the address
//This function will change DTCs[] to include the error code addresses: [address][byte], but not overwrite or duplicate values
void DTCread(int flags[], int flagLength, int DTCs[][2], int DTCsLength, int DTCTableNumber)
{
  int DTCconvoluted = 0;
  int DTCaddr = 0;
  int index = 0;
  boolean duplicate = false;

  for (int plus = 0; plus < DTCsLength; plus++);
  {
    if (DTCs[index][0] != -1)
      index++;
  }

  for (int i = 0; i < flagLength / 2; i++)
  {
    if (flags[i] != -1)
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
  //DTCupdate(DTCs, DTCsLength, DTCTableNumber);
  //delay(2000);
}

//This function takes in an array of DTC addresses, and reads off the string values from PROGMEM
//Finally, it displays them on an LCD and the serial monitor. Values of '-1' are ignored. DTCTableNumber is 1 or 2.
void DTCupdate(int DTCs[][2], byte DTCsLength, byte DTCTableNumber)
{
  char buffer[5];
  byte DTCcount = 0;
  setLCDCursor(6 + DTCcount);

  for (byte a = 0; a < DTCsLength; a++)
  {
    byte b = DTCs[a][0];
    byte c = DTCs[a][1];
    if (DTCs[a][0] != -1 && DTCTableNumber == 1)
    {
      strcpy_P(buffer, (char*)pgm_read_word(&(DTCset1[b][c])));
      Serial.println(buffer);
      lcd.print(buffer);
      DTCcount += 6;
    }
    else if (DTCs[a][0] != -1 && DTCTableNumber == 2)
    {
      strcpy_P(buffer, (char*)pgm_read_word(&(DTCset2[b][c])));
      Serial.println(buffer);
      lcd.print(buffer);
      DTCcount += 6;
    }
  }
}

int computeIAT(int IAT)
{
  int temperature = IAT - 40;
  return temperature;
}

float computeMRP(int boost1, int boost2)
{
  int boostCor = ((boost1 * 256 + boost2) - 32768);
  float MRP = boostCor * 0.01933677;
  return MRP;
}

int computeIDC(int IPW, int rpm1, int rpm2)
{
  /*
  rpm = (rpm1*256+rpm2)/4
  IPW = IPW*256/1000
  IDC = rpm*IPW/1200
  */

  float rpm = ((rpm1 * 256) + rpm2) / 4;
  float IPWcor = IPW * 256 / 1000;
  int IDC = (IPWcor * rpm) / (1200);
  return IDC;
}

//returns the amount of free memory for variable use out of the 2k on the UNO
//from: https://learn.adafruit.com/memories-of-an-arduino/measuring-free-memory
int freeRam ()
{
  extern int __heap_start, *__brkval;
  int v;
  return (int) &v - (__brkval == 0 ? (int) &__heap_start : (int) __brkval);
}

void readDTCArray()
{
  Serial.print(F("("));
  for (int x = 0; x < 10; x++)
  {
    Serial.print(DTC[x]);
    if (x < 9)
      Serial.print(F(","));
  }
  Serial.println(F(")"));
}

void readDTCFlag()
{
  Serial.print(F("("));
  for (int x = 0; x < 10; x++)
  {
    Serial.print(F("("));
    for (int y = 0; y < 2; y++)
    {
      Serial.print(DTCFlag1[x][y]);
      if (y < 1)
        Serial.print(F(","));
    }
    if (x < 9)
      Serial.print(F("),"));
  }
  Serial.println(F("))"));
}

void resetDTCArray()
{
  for (int x = 0; x < 10; x++)
  {
    DTC[x] = -1;
  }
}
