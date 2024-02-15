#include <Arduino.h>

class Menu
{
private:
  int index; 
  int n_items;
public:
  void up();
  void down();
};
