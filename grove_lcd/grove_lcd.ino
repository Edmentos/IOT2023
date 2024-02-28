#include <Wire.h>
#include "rgb_lcd.h"

rgb_lcd lcd;

const int colorR = 255;
const int colorG = 0;
const int colorB = 0;

void setup() 
{
    // set up the LCD's number of columns and rows:
    lcd.begin(16, 2);
    
    lcd.setRGB(colorR, colorG, colorB);
    
}

void loop() 
{
    lcd.setCursor(0, 0);
    lcd.blink();
    lcd.clear();
    lcd.print("Please press the");
    lcd.setCursor(0, 1);
    lcd.print("button");
    delay(1000); //Add code for button press if..... else break;
    lcd.clear();
    lcd.print("View Website for more information");
    delay(1500);
    lcd.scrollDisplayLeft();
    delay(500);
    lcd.scrollDisplayLeft();
    delay(500);
    lcd.scrollDisplayLeft();
    delay(500);
    lcd.scrollDisplayLeft();
    delay(500);
    lcd.scrollDisplayLeft();
    delay(500);
    lcd.scrollDisplayLeft();
    delay(500);
    lcd.scrollDisplayLeft();
    delay(500);
    lcd.scrollDisplayLeft();
    delay(500);
    lcd.scrollDisplayLeft();
    delay(500);
    lcd.scrollDisplayLeft();
    delay(500);
    lcd.scrollDisplayLeft();
    delay(500);
    lcd.scrollDisplayLeft();
    delay(500);
    lcd.scrollDisplayLeft();
    delay(500);
    lcd.scrollDisplayLeft();
    delay(500);
    lcd.scrollDisplayLeft();
    delay(500);
    lcd.scrollDisplayLeft();
    delay(500);
    lcd.scrollDisplayLeft();
    delay(500);
    lcd.scrollDisplayLeft();
    delay(500);
    lcd.scrollDisplayLeft();
    delay(500);
    lcd.scrollDisplayLeft();
    delay(500);
    lcd.scrollDisplayLeft();
    delay(500);
    lcd.scrollDisplayLeft(); //Add link for website 192.168...

}
