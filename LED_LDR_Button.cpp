int LED = 2;
int LDR = A0;
int valor = 0;
int botao = 9;
void setup()
{
  Serial.begin(9600);
  pinMode(botao, INPUT);
  pinMode(LED, OUTPUT);
}

void loop()
{
  int valor = analogRead(LDR);
  Serial.println(valor);
  
  if (valor < 535)
  {
    digitalWrite(LED, HIGH);
  }
  else
  {
    digitalWrite(LED, LOW);
  }
  
  if(digitalRead(botao)) 
  {
    digitalWrite(LED, HIGH);
    delay(1000);
  } 
  else 
  {
    digitalWrite(LED, LOW);
  }
}