/// Files
#include "class_menu.h"

/// External libraries
#include <LiquidCrystal_I2C.h>

class Menu
{
  public:
    void scroll_menu()
    {
      all_menu[menu_counter % 2]();
      menu_counter++;
    }

  private:
    int menu_counter = 0;
};


LiquidCrystal_I2C lcd(0x27, 16, 2);



Menu menu;

void setup() {
  lcd.init();
  lcd.backlight();

}

void loop() {
  if (digitalRead(2) == HIGH) {
    menu.scroll_menu();
  }

}
