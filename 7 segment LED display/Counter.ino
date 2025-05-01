  int digit[10][8] = {
  {0,0,1,0,0,0,0,1}, // 0
  {1,1,1,0,1,1,0,1}, // 1
  {1,0,1,0,0,0,1,0}, // 2
  {1,0,1,0,1,0,0,0}, // 3
  {0,1,1,0,1,1,0,0}, // 4
  {0,0,1,1,1,0,0,0}, // 5
  {0,0,1,1,0,0,0,0}, // 6
  {1,0,1,0,1,1,0,1}, // 7
  {0,0,1,0,0,0,0,0}, // 8
  {0,0,1,0,1,0,0,0}  // 9
};

byte pin[] = {2,3,4,5,6,7,8,9}; // the arduino pins

// The setup function is run only once when we press the reset or power the board
void setup()
{
  for( byte a =0; a<8; ++a)
  {
    pinMode(pin[a], OUTPUT); // initialising the pins as the output 
  }
}

// the loop function runs over and over again forever
void loop()
{
  for(byte a =0; a<10; ++a)
  {
    for(byte b =0; b<8; ++b)
    {
      digitalWrite(pin[b], digit[a][b]);
    }
    delay(500);
  }
}
