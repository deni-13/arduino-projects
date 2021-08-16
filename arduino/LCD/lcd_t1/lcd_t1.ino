#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C ekr(0x27,16,2);

void setup() 
{
ekr.init();
ekr.backlight();
ekr.setCursor(0,0); //yazi hizasi --> 1 asagi
ekr.print("hello");
ekr.setCursor(0,1);
ekr.print("welcome");
delay(1000);
}

void loop() 
{
ekr.setCursor(0,0);
ekr.print("deniz");
ekr.setCursor(0,1);
ekr.print("is coding");

}
