
int b1 = 0;
int b2 = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(3, INPUT);
  pinMode(2, INPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  b1 = digitalRead(3);
  b2 = digitalRead(2);
  if (b1 == HIGH) {
    Serial.println("LED Amarelo esta acesso");
    digitalWrite(8, HIGH);
    delay(1000);
  } else {
    digitalWrite(8, LOW);
 
  if (b2 == HIGH) {
    Serial.println("LED Verde esta acesso");
    digitalWrite(9, HIGH);
    delay(1000);
  } else {
    digitalWrite(9, LOW);
  }
    }
}