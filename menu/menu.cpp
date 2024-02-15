#include "menu.h"

Menu::Menu() 
{
  index = 0;
  n_items = 0;
}

void Menu::addItem(String text)
{
  if(n_items < 10) {
    items_text[n_items] = text;
    n_items++;
  }
}

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
