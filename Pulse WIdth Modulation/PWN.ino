const int led = 9; 

void setup()
{
  pinMode(led, OUTPUT);
}
// 8 bits --> 256 values from 0 to 255 
void loop()
{
  analogWrite(led, 10); 
  delay(1000);
  analogWrite(led, 100); 
  delay(1000);
  analogWrite(led, 255); 
  delay(1000);
  analogWrite(led, 0); 
  delay(1000);
}
