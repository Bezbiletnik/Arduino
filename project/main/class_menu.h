#ifndef class_menu_h
#define class_menu_h
#include <Arduino.h>

class Menu
{
  public:
    void scroll_menu();

  private:
    int menu_counter = 0;
};

#endif
