#include "morse.h"

String morse_array[26] = {".-", "-...", "-.-.", "-..", ".", "..-.",  // A, B, C, D, E, F
                            "--.", "....", "..", ".---", "-.-", ".-..", // G, H, I, J, K, L
                            "--", "-.", "---", ".--.", "--.-", ".-.",   // M, N, O, P, Q, R
                            "...", "-", "..-", "...-", ".--", "-..-",   // S, T, U, V, W, X
                            "-.--", "--.."};  

void Morse::begin()
{
    pinMode(pin, OUTPUT);
}

void Morse::begin(uint8_t _pin)
{
    pin = _pin;
    begin();
}

size_t Morse::write(uint8_t c)
{
  String code = morse_array[c-65];

  for(int pos = 0; pos < code.length(); pos++ ){
    if(code.charAt(pos) == '.')
      dot();
    else
      dash();  
  }
  delay(3000);

  return 1;
}

void Morse::dot()
{
  digitalWrite(pin, HIGH);
  delay(1000);
  digitalWrite(pin, LOW);
  delay(1000);
}

void Morse::dash()
{
  digitalWrite(pin, HIGH);
  delay(3000);
  digitalWrite(pin, LOW);
  delay(1000);
}
