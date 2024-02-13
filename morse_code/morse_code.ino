#include "morse.h"

Morse morse;

void setup()
{
    morse.begin();    
}

void loop()
{
    morse.write('H');
    morse.write('O');
    morse.write('L');
    morse.write('A');    
}
