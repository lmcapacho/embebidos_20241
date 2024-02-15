#include "menu.h"

Menu menu;

void setup() {
  Serial.begin(115200);
  
  menu.begin(Serial);

  menu.addItem("Option 0");
  menu.addItem("Option 1");
  menu.addItem("Option 2");
}

void loop() {
  for(int i=0; i<3; i++){
    menu.up();
    delay(1000);
  }

  for(int i=0; i<3; i++){
    menu.down();
    delay(1000);
  }
}
