int verde = 8;
int amarelo = 9;
int vermelho = 10;

String texto;
void setup()
{
  pinMode(verde, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(vermelho, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  while (Serial.available() > 0)
  {
    texto = Serial.readString();

    if(texto == "1"){
      digitalWrite(8, HIGH);
      delay(1000);
      digitalWrite(8, LOW);
    }
      
    if(texto == "2"){
      digitalWrite(9, HIGH);
      delay(1000);
      digitalWrite(9, LOW);
    }
    if(texto == "3"){
      digitalWrite(10, HIGH);
      delay(1000);
      digitalWrite(10, LOW);
    }
  }
}