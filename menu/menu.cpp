#include "menu.h"

void Menu::up()
{
  if(index < n_items-1){
    index++;
  }
}

void Menu::down()
{
  if(index > 0){  
    index--;
  }
}
