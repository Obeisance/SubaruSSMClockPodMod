#include <SoftwareSerial.h>
#include "Arduino.h"


//use this function to read (and display over serial comms)
//the response that the ECU gives to a query packet
bool readSSM(SoftwareSerial &serialPort, uint8_t *dataBuffer, uint16_t bufferSize);


//use this function to read the response that the ECU
//gives to a query packet- set a flag to ignore values
//which are zero
bool readSSM_Fast(SoftwareSerial &serialPort, uint8_t *dataBuffer, uint16_t bufferSize, bool ignoreZeroValues);


//use this function to write a serial packet to the ECU
//this function displays the packet it sends over
//serial comms for diagnostic support. It also corrects
//the packet header, command and checksum bytes to be
//a 'read ECU single address' query
void writeSSM(SoftwareSerial &serialPort, uint8_t *dataBuffer, uint8_t bufferSize);

//use this function to write the contents of the data
//buffer to the ECU- no serial display or error
//correction is performed
void writeSSM_Fast(SoftwareSerial &serialPort, uint8_t data[], uint8_t length);

//use this function to send data to the ECU and
//to read the response- if an error occurs
//the function will re-try the ECU query
uint8_t serialCallSSM(SoftwareSerial &serialPort, uint8_t *sendDataBuffer, uint16_t sendBufferSize, uint8_t *receiveDataBuffer, uint16_t receiveBufferSize, uint8_t attempts);


//below are a bunch of functions related to reading DTCs

//use this function to check for DTCs and return a string
//containing all DTCs discovered. The boolean that is passed
//in is updated if DTCs are found.
String checkForCEL(SoftwareSerial &serialPort, bool &MILon);

//the below functions are used in 'checkForCEL' to 
//decode the DTCs as read from the ECU
void DTCread(uint8_t flags[], uint8_t flagLength, int DTCs[][2], int DTCsLength, int DTCTableNumber);
String DTCupdate(int DTCs[][2], byte DTCsLength, byte DTCTableNumber);
void resetDTCArray(uint8_t *DTC, uint8_t DTCarrayLength);