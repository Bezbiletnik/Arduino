#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

byte customChar[] = {
  B00000,
  B00110,
  B00110,
  B00110,
  B00111,
  B00000,
  B00000,
  B00000
};

void image00() {
  lcd.clear();
  
  byte image08[8] = {B11111, B00000, B00000, B00000, B00000, B00000, B00000, B00000};
  byte image07[8] = {B00000, B11111, B00000, B00000, B01110, B01110, B01010, B01110};
  byte image09[8] = {B00000, B11111, B00000, B00000, B01110, B01110, B01010, B01110};
  byte image23[8] = {B00100, B00100, B00000, B00000, B00000, B00000, B00000, B00000};
  byte image25[8] = {B00100, B00100, B00000, B00000, B00000, B00000, B00000, B00000};
  
  lcd.createChar(0, image08);
  lcd.createChar(1, image07);
  lcd.createChar(2, image09);
  lcd.createChar(3, image23);
  lcd.createChar(4, image25);
  
  lcd.setCursor(7, 0);
  lcd.write(byte(0));
  lcd.setCursor(6, 0);
  lcd.write(byte(1));
  lcd.setCursor(8, 0);
  lcd.write(byte(2));
  lcd.setCursor(6, 1);
  lcd.write(byte(3));
  lcd.setCursor(8, 1);
  lcd.write(byte(4));

}

void image01() {
  lcd.clear();
  
  byte image08[8] = {B11111, B00000, B00000, B00000, B00000, B00000, B00000, B00000};
  byte image07[8] = {B00000, B11111, B00000, B00000, B01110, B01110, B01010, B01110};
  byte image09[8] = {B00000, B11111, B00000, B00000, B01110, B01110, B01010, B01110};
  byte image25[8] = {B00000, B00100, B00100, B00000, B00000, B00000, B00000, B00000};
  byte image23[8] = {B00000, B00100, B00100, B00000, B00000, B00000, B00000, B00000};
  
  lcd.createChar(0, image08);
  lcd.createChar(1, image07);
  lcd.createChar(2, image09);
  lcd.createChar(3, image25);
  lcd.createChar(4, image23);
  
  lcd.setCursor(7, 0);
  lcd.write(byte(0));
  lcd.setCursor(6, 0);
  lcd.write(byte(1));
  lcd.setCursor(8, 0);
  lcd.write(byte(2));
  lcd.setCursor(8, 1);
  lcd.write(byte(3));
  lcd.setCursor(6, 1);
  lcd.write(byte(4));
}

void image02() {
  lcd.clear();
  
  byte image08[8] = {B11111, B00000, B00000, B00000, B00000, B00000, B00000, B00000};
  byte image07[8] = {B00000, B11111, B00000, B00000, B01110, B01110, B01010, B01110};
  byte image09[8] = {B00000, B11111, B00000, B00000, B01110, B01110, B01010, B01110};
  byte image25[8] = {B00000, B00000, B00100, B00100, B00000, B00000, B00000, B00000};
  byte image23[8] = {B00000, B00000, B00100, B00100, B00000, B00000, B00000, B00000};
  
  lcd.createChar(0, image08);
  lcd.createChar(1, image07);
  lcd.createChar(2, image09);
  lcd.createChar(3, image25);
  lcd.createChar(4, image23);
  
  lcd.setCursor(7, 0);
  lcd.write(byte(0));
  lcd.setCursor(6, 0);
  lcd.write(byte(1));
  lcd.setCursor(8, 0);
  lcd.write(byte(2));
  lcd.setCursor(8, 1);
  lcd.write(byte(3));
  lcd.setCursor(6, 1);
  lcd.write(byte(4));
}

void image03() {
  lcd.clear();
  
  byte image08[8] = {B11111, B00000, B00000, B00000, B00000, B00000, B00000, B00000};
  byte image07[8] = {B00000, B11111, B00000, B00000, B01110, B01110, B01010, B01110};
  byte image09[8] = {B00000, B11111, B00000, B00000, B01110, B01110, B01010, B01110};
  byte image25[8] = {B00000, B00000, B00000, B00100, B00100, B00000, B00000, B00000};
  byte image23[8] = {B00000, B00000, B00000, B00100, B00100, B00000, B00000, B00000};
  
  lcd.createChar(0, image08);
  lcd.createChar(1, image07);
  lcd.createChar(2, image09);
  lcd.createChar(3, image25);
  lcd.createChar(4, image23);
  
  lcd.setCursor(7, 0);
  lcd.write(byte(0));
  lcd.setCursor(6, 0);
  lcd.write(byte(1));
  lcd.setCursor(8, 0);
  lcd.write(byte(2));
  lcd.setCursor(8, 1);
  lcd.write(byte(3));
  lcd.setCursor(6, 1);
  lcd.write(byte(4));
}

void image04() {
  lcd.clear();
  
  byte image08[8] = {B11111, B00000, B00000, B00000, B00000, B00000, B00000, B00000};
  byte image07[8] = {B00000, B11111, B00000, B00000, B01110, B01110, B01010, B01110};
  byte image09[8] = {B00000, B11111, B00000, B00000, B01110, B01110, B01010, B01110};
  byte image25[8] = {B00000, B00000, B00000, B00000, B00100, B00100, B00000, B00000};
  byte image23[8] = {B00000, B00000, B00000, B00000, B00100, B00100, B00000, B00000};
  
  lcd.createChar(0, image08);
  lcd.createChar(1, image07);
  lcd.createChar(2, image09);
  lcd.createChar(3, image25);
  lcd.createChar(4, image23);
  
  lcd.setCursor(7, 0);
  lcd.write(byte(0));
  lcd.setCursor(6, 0);
  lcd.write(byte(1));
  lcd.setCursor(8, 0);
  lcd.write(byte(2));
  lcd.setCursor(8, 1);
  lcd.write(byte(3));
  lcd.setCursor(6, 1);
  lcd.write(byte(4));
}

void image05() {
  lcd.clear();
  
  byte image08[8] = {B11111, B00000, B00000, B00000, B00000, B00000, B00000, B00000};
  byte image07[8] = {B00000, B11111, B00000, B00000, B01110, B01110, B01010, B01110};
  byte image09[8] = {B00000, B11111, B00000, B00000, B01110, B01110, B01010, B01110};
  byte image25[8] = {B00000, B00000, B00000, B00000, B00000, B00100, B00100, B00000};
  byte image23[8] = {B00000, B00000, B00000, B00000, B00000, B00100, B00100, B00000};
  
  lcd.createChar(0, image08);
  lcd.createChar(1, image07);
  lcd.createChar(2, image09);
  lcd.createChar(3, image25);
  lcd.createChar(4, image23);
  
  lcd.setCursor(7, 0);
  lcd.write(byte(0));
  lcd.setCursor(6, 0);
  lcd.write(byte(1));
  lcd.setCursor(8, 0);
  lcd.write(byte(2));
  lcd.setCursor(8, 1);
  lcd.write(byte(3));
  lcd.setCursor(6, 1);
  lcd.write(byte(4));
}

void image06() {
  lcd.clear();
  
  byte image08[8] = {B11111, B00000, B00000, B00000, B00000, B00000, B00000, B00000};
  byte image07[8] = {B00000, B11111, B00000, B00000, B01110, B01110, B01010, B01110};
  byte image09[8] = {B00000, B11111, B00000, B00000, B01110, B01110, B01010, B01110};
  byte image25[8] = {B00000, B00000, B00000, B00000, B00000, B00000, B01010, B00100};
  byte image23[8] = {B00000, B00000, B00000, B00000, B00000, B00000, B01010, B00100};
  
  lcd.createChar(0, image08);
  lcd.createChar(1, image07);
  lcd.createChar(2, image09);
  lcd.createChar(3, image25);
  lcd.createChar(4, image23);
  
  lcd.setCursor(7, 0);
  lcd.write(byte(0));
  lcd.setCursor(6, 0);
  lcd.write(byte(1));
  lcd.setCursor(8, 0);
  lcd.write(byte(2));
  lcd.setCursor(8, 1);
  lcd.write(byte(3));
  lcd.setCursor(6, 1);
  lcd.write(byte(4));
}

void image07() {
  lcd.clear();
  
  byte image08[8] = {B11111, B00000, B00000, B00000, B00000, B00000, B00000, B00000};
  byte image07[8] = {B00000, B11111, B00000, B00000, B01110, B01110, B01010, B01110};
  byte image09[8] = {B00000, B11111, B00000, B00000, B01110, B01110, B01010, B01110};
  byte image25[8] = {B00000, B00000, B00000, B00000, B00000, B00000, B00000, B01110};
  byte image23[8] = {B00000, B00000, B00000, B00000, B00000, B00000, B00000, B01110};
  
  lcd.createChar(0, image08);
  lcd.createChar(1, image07);
  lcd.createChar(2, image09);
  lcd.createChar(3, image25);
  lcd.createChar(4, image23);
  
  lcd.setCursor(7, 0);
  lcd.write(byte(0));
  lcd.setCursor(6, 0);
  lcd.write(byte(1));
  lcd.setCursor(8, 0);
  lcd.write(byte(2));
  lcd.setCursor(8, 1);
  lcd.write(byte(3));
  lcd.setCursor(6, 1);
  lcd.write(byte(4));
}

void (*doScene[])(void) = {
  image00,
  image01,
  image02,
  image03,
  image04,
  image05,
  image06,
  image07
};

void setup() {
  lcd.init();
  lcd.backlight();
}

void loop() {
  
    image00();
    delay(250);
    image01();
    delay(250);
    image02();
    delay(250);
    image03();
    delay(700);
    image04();
    delay(250);
    image05();
    delay(250);
    image06();
    delay(700);
    image07();
    delay(1250);
}
