// The setup function is run only once when we press the reset or power the board
void setup() {
  // the digital pin LED_BUILTIN which is attached to pin 13 is initialized as the output
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(3000);                      // wait for 3 seconds
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(2000);                      // wait for 2 seconds
}
