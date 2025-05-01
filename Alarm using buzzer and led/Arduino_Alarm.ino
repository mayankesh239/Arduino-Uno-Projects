int buzzer = 11;

// The setup function is run only once when we press the reset or power the board
void setup()
{
  pinMode(8,OUTPUT);
}

// the loop function runs over and over again forever
void loop()
{
  int cnt = 0;

  do{
    cnt++;
    digitalWrite(8, HIGH);
    tone(buzzer, 450);
    delay(500);
    digitalWrite(8, LOW);
    noTone(buzzer);
    delay(500);
  }while(cnt<2);

  delay(2000);
}
