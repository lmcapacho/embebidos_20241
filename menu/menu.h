#include <Arduino.h>

class Menu
{
private:
  int index; 
  int n_items;
  String items_text[10];
public:
  Menu();
  void addItem(String text);
  void up();
  void down();
};
