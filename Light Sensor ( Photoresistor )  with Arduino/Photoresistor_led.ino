const int led = 8; 
const int sensor_pin = A0;

int sensor;
const int threshold = 20;

void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  sensor = analogRead(sensor_pin);
  Serial.println(sensor);
  if(sensor<threshold)
  {
    digitalWrite(led, HIGH);
  }
  else
  {
    digitalWrite(led, LOW);
  }
}
