void setup()
{
    pinMode(2, OUTPUT);    
}

void loop()
{
    // Letra A
    dot();
    dash();    
}

void dot()
{
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  delay(1000);
}

void dash()
{
  digitalWrite(2, HIGH);
  delay(3000);
  digitalWrite(2, LOW);
  delay(1000);
}
