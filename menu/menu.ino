#include "menu.h"

Menu menu;

unsigned long lastTime = 0;

void setup() {
  Serial.begin(115200);
  
  menu.begin(Serial);

  menu.addItem("Option 0", option0);
  menu.addItem("Option 1", NULL);
  menu.addItem("Option 2", NULL);

  pinMode(2, OUTPUT);
  pinMode(14, INPUT_PULLUP);

  attachInterrupt(14, enter, FALLING);
}

void loop() {
}

void enter()
{
  if( (millis() - lastTime) > 100) { 
    menu.enter();
    lastTime = millis();
  }
}

void option0()
{
  digitalWrite(2, !digitalRead(2));
} 