#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

int far = 0;
int level = 0;

int VRx = A0;
int VRy = A1;
int SW = 8;

int xPosition = 0;
int yPosition = 0;
int SW_state = 0;
int mapX = 0;
int mapY = 0;

void image(int far, int level) {
  lcd.clear();
  
  byte image01[8] = {B00000, B01110, B01110, B01110, B00100, B00100, B01110, B01010};
  
  lcd.createChar(0, image01);
  
  lcd.setCursor(far, level);
  lcd.write(byte(0));
}

void setup() {
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  image(0, 0);

}

void loop() {
  
  xPosition = analogRead(VRx);
  yPosition = analogRead(VRy);
  SW_state = digitalRead(SW);
  mapX = map(xPosition, 0, 1023, -512, 512);
  mapY = map(yPosition, -21, 1023, -512, 512);
  mapY = -mapY;

  if (far < 0){
    far = 16;
  }

  if (mapY > 400){
    level++;
    image(far % 16, level % 2);
  }
  if (mapY < -400){
    level--;
    image(far % 16, level % 2);
  }
  if (mapX > 400){
    far++;
    image(far % 16, level % 2);
  }
  if (mapX < -400){
    far--;
    image(far % 16, level % 2);
  }

  Serial.print("\nFar:");
  Serial.print(far);
  Serial.print("\tLevel:");
  Serial.print(level);

  delay(100);

}
