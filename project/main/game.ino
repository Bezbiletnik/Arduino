#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

byte santa[] = {
  B00000,
  B00100,
  B01110,
  B10101,
  B00100,
  B01010,
  B01010,
  B11011
};

byte gift[] = {
  B00000,
  B00000,
  B01010,
  B00100,
  B01110,
  B01110,
  B01110,
  B00000
};

class Games{
  
  private:
    int far = 0;
    int level = 0;
    
    int VRx = A0;
    int VRy = A1;
    int SW = 2;
    int xPosition = 0;
    int yPosition = 0;
    int SW_state = 0;
    int mapX = 0;
    int mapY = 0;
    
  public:

    void show_gift(int far, int level){
      lcd.clear();
      
      lcd.createChar(0, gift);
      
      lcd.setCursor(far, level);
      lcd.write(byte(0));
      
    }

    void show_santa(int far, int level){
      lcd.clear();
      
      lcd.createChar(0, santa);
      
      lcd.setCursor(far, level);
      lcd.write(byte(0));
      
    }
    
     void play_santa_game(){
      while (true){
        xPosition = analogRead(VRx);
        yPosition = analogRead(VRy);
        SW_state = digitalRead(SW);
        mapX = map(xPosition, 0, 1023, -512, 512);
        mapY = map(yPosition, -21, 1023, -512, 512);
        mapY = -mapY;
        
        if (mapY > 400){
          level++;
          show_santa(15, level % 2);
        }
        if (mapY < -400){
          level--;
          show_santa(15, level % 2);
        }
        delay(100);
      }
      
    }
};
