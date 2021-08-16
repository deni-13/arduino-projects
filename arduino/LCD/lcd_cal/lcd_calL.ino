#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C ekr(0x27,16,2);

void setup() 
{
ekr.init();
ekr.backlight();
ekr.setCursor(0,0); //yazi
ekr.print("deneme");

}

void loop() 
{
  

}
