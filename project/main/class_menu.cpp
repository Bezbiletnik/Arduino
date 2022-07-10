#include "class_menu.h"
#include "menu_list.h"
#include "Arduino.h"

void Menu::scroll_menu()
{
    List::all_menu[menu_counter % 2]();
    menu_counter++;
}
