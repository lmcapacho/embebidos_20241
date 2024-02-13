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

void Morse::write(char c)
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
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  delay(1000);
}

void Morse::dash()
{
  digitalWrite(2, HIGH);
  delay(3000);
  digitalWrite(2, LOW);
  delay(1000);
}