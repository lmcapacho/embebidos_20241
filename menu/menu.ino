#include "menu.h"

#define LED0 19
#define LED1 18
#define LED2 5

Menu menu;

volatile unsigned long lastTime = 0;
volatile boolean bUp, bDown, bEnter; 

void setup() {
  Serial.begin(115200);
  
  menu.begin(Serial);

  menu.addItem("Option 0", option0);
  menu.addItem("Option 1", option1);
  menu.addItem("Option 2", option2);

  pinMode(LED0, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);

  pinMode(14, INPUT_PULLUP);
  pinMode(27, INPUT_PULLUP);
  pinMode(26, INPUT_PULLUP);

  attachInterrupt(14, enter, FALLING);
  attachInterrupt(27, down, FALLING);
  attachInterrupt(26, up, FALLING);

  bUp = bDown = bEnter = false;
}

void loop() {
  if(bUp){
    menu.up();
    bUp =  false;
  }

  if(bDown){
    menu.down();
    bDown =  false;
  }

  if(bEnter){
    menu.enter();
    bEnter =  false;
  }
}

void ARDUINO_ISR_ATTR enter()
{
  if( (millis() - lastTime) > 100) { 
    bEnter = true;
    lastTime = millis();
  }
}

void ARDUINO_ISR_ATTR up()
{
  if( (millis() - lastTime) > 100) { 
    bUp = true;
    lastTime = millis();
  }
}

void ARDUINO_ISR_ATTR down()
{
  if( (millis() - lastTime) > 100) { 
    bDown = true;
    lastTime = millis();
  }
}

void option0()
{
  while(true) {
    digitalWrite(LED0, !digitalRead(LED0));
    delay(1000);
  }
}

void option1()
{
  digitalWrite(LED1, !digitalRead(LED1));
}

void option2()
{
  digitalWrite(LED2, !digitalRead(LED2));
}