void setup()
{
  Serial.begin(9600);

  pinMode(A0, INPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  Serial.print("volume: ");
  Serial.println(analogRead(A0));
  if (analogRead(A0) > 800) {
    digitalWrite(9, HIGH);
  } else {
    digitalWrite(9, LOW);
  }
  delay(10); 
