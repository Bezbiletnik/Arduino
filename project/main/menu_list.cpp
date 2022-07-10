#include <LiquidCrystal_I2C.h>

#include "menu_list.h"
#include "Arduino.h"

LiquidCrystal_I2C lcd(0x27, 16, 2);

void List::image_Game()
{
      lcd.clear();
    
      byte image01[8] = {B01111, B10000, B10000, B10000, B10111, B10001, B10001, B01110};
      byte image02[8] = {B00100, B01010, B10001, B10001, B11111, B10001, B10001, B10001};
      byte image03[8] = {B10001, B11011, B10101, B10001, B10001, B10001, B10001, B10001};
      byte image04[8] = {B11111, B10000, B10000, B10000, B11111, B10000, B10000, B11111};
      byte image05[8] = {B01111, B10000, B10000, B11111, B00001, B00001, B00001, B11110};
      byte image16[8] = {B00100, B01110, B10101, B00100, B00100, B00100, B00100, B00000};
      byte image32[8] = {B00000, B00100, B00100, B00100, B00100, B10101, B01110, B00100};
      byte image06[8] = {B00000, B00110, B00110, B00000, B00000, B00110, B00110, B00000};
    
    
      lcd.createChar(0, image01);
      lcd.createChar(1, image02);
      lcd.createChar(2, image03);
      lcd.createChar(3, image04);
      lcd.createChar(4, image05);
      lcd.createChar(5, image16);
      lcd.createChar(6, image32);
      lcd.createChar(7, image06);


      lcd.setCursor(0, 0);
      lcd.write(byte(0));
      lcd.setCursor(1, 0);
      lcd.write(byte(1));
      lcd.setCursor(2, 0);
      lcd.write(byte(2));
      lcd.setCursor(3, 0);
      lcd.write(byte(3));
      lcd.setCursor(4, 0);
      lcd.write(byte(4));
      lcd.setCursor(15, 0);
      lcd.write(byte(5));
      lcd.setCursor(15, 1);
      lcd.write(byte(6));
      lcd.setCursor(5, 0);
      lcd.write(byte(7)); 
}

void List::image_Scaner()
{
      lcd.clear();

      byte image03[8] = {B11001, B10101, B10101, B10101, B10101, B10101, B10101, B10011};
      byte image16[8] = {B00100, B01110, B10101, B00100, B00100, B00100, B00100, B00000};
      byte image32[8] = {B00000, B00100, B00100, B00100, B00100, B10101, B01110, B00100};
      byte image01[8] = {B01111, B10000, B10000, B10000, B11111, B00001, B00001, B11110};
      byte image02[8] = {B11111, B10000, B10000, B10000, B11111, B10000, B10000, B11111};
      byte image04[8] = {B01111, B10000, B10000, B10000, B11111, B00001, B00001, B11110};
      byte image05[8] = {B01110, B10001, B10001, B10001, B10001, B10001, B10001, B01110};
      byte image06[8] = {B11100, B10010, B10001, B10110, B11000, B10100, B10010, B10001};


      lcd.createChar(0, image03);
      lcd.createChar(1, image16);
      lcd.createChar(2, image32);
      lcd.createChar(3, image01);
      lcd.createChar(4, image02);
      lcd.createChar(5, image04);
      lcd.createChar(6, image05);
      lcd.createChar(7, image06);


      lcd.setCursor(2, 0);
      lcd.write(byte(0));
      lcd.setCursor(15, 0);
      lcd.write(byte(1));
      lcd.setCursor(15, 1);
      lcd.write(byte(2));
      lcd.setCursor(0, 0);
      lcd.write(byte(3));
      lcd.setCursor(1, 0);
      lcd.write(byte(4));
      lcd.setCursor(3, 0);
      lcd.write(byte(5));
      lcd.setCursor(4, 0);
      lcd.write(byte(6));
      lcd.setCursor(5, 0);
      lcd.write(byte(7));
}

void List::(*all_menu[])(void)
{
  image_Game,
  image_Sensor,
}
