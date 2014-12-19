#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <XBee.h> // make it added to include path
#include <SoftwareSerial.h>

#include <Lcd.h>

Lcd & lcd = Lcd::getInstance();
  
void setup()
{
  
  //delay(1000);
  lcd.display("Hello ");
  lcd.display("Bye");
  
  // Activate scrolling
  lcd.setScrollingOn(true);
  
  lcd.display("ABCDEFGHIJKLMNOPQRSTUVWXYZ"); // ABCDEFGHIJKLMNOP
  lcd.scroll(); // QRSTUVWXYZ
  lcd.scroll(); // ABCDEFGHIJKLMNOP
  lcd.scroll(); // QRSTUVWXYZ
  lcd.scroll(); // ABCDEFGHIJKLMNOP
  
  delay(5000);
}

void loop()
{
  lcd.scroll();
}
