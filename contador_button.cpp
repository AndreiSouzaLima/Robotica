int x=0;
int botao = 9;
int botao2 = 10;
void setup()
{
  pinMode(botao, INPUT);
  pinMode(botao2, INPUT);
  Serial.begin(9600);
}

void loop(){
  if(digitalRead(botao))
    x++;
    Serial.println(x);
    delay(100);
  
  if(digitalRead(botao2))
    x--;
    Serial.println(x);
    delay(100);
  }