#include <Arduino.h>


class Morse: public Print
{
private:
  uint8_t pin = 2;
  
  const String
  morse_array[26] = {".-", "-...", "-.-.", "-..", ".", "..-.",  // A, B, C, D, E, F
                    "--.", "....", "..", ".---", "-.-", ".-..", // G, H, I, J, K, L
                    "--", "-.", "---", ".--.", "--.-", ".-.",   // M, N, O, P, Q, R
                    "...", "-", "..-", "...-", ".--", "-..-",   // S, T, U, V, W, X
                    "-.--", "--.."};                            // Y, Z
  
  void dot();
  void dash();

public:
  size_t write(uint8_t c);  
  
  void begin();
};  
