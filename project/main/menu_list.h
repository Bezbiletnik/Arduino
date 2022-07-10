#include <LiquidCrystal_I2C.h>

#ifndef menu_list_h
#define menu_list_h
#include <Arduino.h>

class List
{
  public:
//  Pictures
    void image_Game();
    void image_Sensor();

//  Render pictures
    void (*all_menu[2])(void);
};

#endif
