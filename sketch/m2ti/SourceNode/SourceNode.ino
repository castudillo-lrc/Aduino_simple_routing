#include <XBee.h> // make it added to include path
#include <SoftwareSerial.h>
#include <HumiditySensor.h>
#include <SourceNode.h>
#include <CommonValues.h>
//#include <LiquidCrystal_I2C.h>

const unsigned long myAddress = 0x12345678;

//int pinNumber = 8;

//HumiditySensor humiditySensor(pinNumber);

//SourceNode sourceNode(myAddress, humiditySensor);

//SourceNode sourceNode(myAddress);

//SourceNode sourceNode();

SourceNode sourceNode = SourceNode::getInstance();


void setup()
{
  sourceNode.setAddress(myAddress);
}

void loop()
{  
  sourceNode.processMessages();
  
  //sourceNode.sendSensorValue();
  
  delay(1000);
}

