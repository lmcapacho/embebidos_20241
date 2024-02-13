#include "morse.h"

Morse morse;

void setup()
{
    morse.begin();    
}

void loop()
{
    morse.print("HOLA");    
}
