int verde = 8;
int amarelo = 9;
int vermelho = 10;
int branco = 11;
int azul = 12;
int laranja = 13;

String texto;
void setup()
{
  pinMode(verde, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(vermelho, OUTPUT);
  pinMode(branco, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(laranja, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  while (Serial.available() > 0)
  {
    texto = Serial.readString();
  }
    Serial.println(texto);

    if(texto == "1"){
      digitalWrite(verde, HIGH);
      delay(200);
      digitalWrite(verde, LOW);
      digitalWrite(amarelo, HIGH);
      delay(200);
      digitalWrite(amarelo, LOW);
      digitalWrite(vermelho, HIGH);
      delay(200);
      digitalWrite(vermelho, LOW);
      digitalWrite(branco, HIGH);
      delay(200);
      digitalWrite(branco, LOW);
      digitalWrite(azul, HIGH);
      delay(200);
      digitalWrite(azul, LOW);
      digitalWrite(laranja, HIGH);
      delay(200);
      digitalWrite(laranja, LOW);
      digitalWrite(verde, HIGH);
      delay(200);
      digitalWrite(verde, LOW);
      digitalWrite(amarelo, HIGH);
      delay(200);
      digitalWrite(amarelo, LOW);
      digitalWrite(vermelho, HIGH);
      delay(200);
      digitalWrite(vermelho, LOW);
      digitalWrite(branco, HIGH);
      delay(200);
      digitalWrite(branco, LOW);
      digitalWrite(azul, HIGH);
      delay(200);
      digitalWrite(azul, LOW);
      digitalWrite(laranja, HIGH);
      delay(200);
      digitalWrite(laranja, LOW);
      
    }
      
    if(texto == "2"){
      digitalWrite(verde, HIGH);
      digitalWrite(amarelo, HIGH);
      digitalWrite(vermelho, HIGH);
      digitalWrite(branco, HIGH);
      digitalWrite(azul, HIGH);
      digitalWrite(laranja, HIGH);
      delay(500);
      digitalWrite(verde, LOW);
      digitalWrite(amarelo, LOW);
      digitalWrite(vermelho, LOW);
      digitalWrite(branco, LOW);
      digitalWrite(azul, LOW);
      digitalWrite(laranja, LOW);
      delay(500);
      digitalWrite(verde, HIGH);
      digitalWrite(amarelo, HIGH);
      digitalWrite(vermelho, HIGH);
      digitalWrite(branco, HIGH);
      digitalWrite(azul, HIGH);
      digitalWrite(laranja, HIGH);
      delay(500);
      digitalWrite(verde, LOW);
      digitalWrite(amarelo, LOW);
      digitalWrite(vermelho, LOW);
      digitalWrite(branco, LOW);
      digitalWrite(azul, LOW);
      digitalWrite(laranja, LOW);
      delay(500);
      digitalWrite(verde, HIGH);
      digitalWrite(amarelo, HIGH);
      digitalWrite(vermelho, HIGH);
      digitalWrite(branco, HIGH);
      digitalWrite(azul, HIGH);
      digitalWrite(laranja, HIGH);
      delay(500);
      digitalWrite(verde, LOW);
      digitalWrite(amarelo, LOW);
      digitalWrite(vermelho, LOW);
      digitalWrite(branco, LOW);
      digitalWrite(azul, LOW);
      digitalWrite(laranja, LOW);
      delay(500);
      digitalWrite(verde, HIGH);
      digitalWrite(amarelo, HIGH);
      digitalWrite(vermelho, HIGH);
      digitalWrite(branco, HIGH);
      digitalWrite(azul, HIGH);
      digitalWrite(laranja, HIGH);
      delay(500);
      digitalWrite(verde, LOW);
      digitalWrite(amarelo, LOW);
      digitalWrite(vermelho, LOW);
      digitalWrite(branco, LOW);
      digitalWrite(azul, LOW);
      digitalWrite(laranja, LOW);
    }
    if(texto == "3"){
      digitalWrite(verde, HIGH);
      digitalWrite(amarelo, LOW);
      digitalWrite(vermelho, HIGH);
      digitalWrite(branco, LOW);
      digitalWrite(azul, HIGH);
      digitalWrite(laranja, LOW);
      delay(1000);
      digitalWrite(verde, LOW);
      digitalWrite(amarelo, HIGH);
      digitalWrite(vermelho, LOW);
      digitalWrite(branco, HIGH);
      digitalWrite(azul, LOW);
      digitalWrite(laranja, HIGH);
      delay(1000);
      digitalWrite(verde, HIGH);
      digitalWrite(amarelo, LOW);
      digitalWrite(vermelho, HIGH);
      digitalWrite(branco, LOW);
      digitalWrite(azul, HIGH);
      digitalWrite(laranja, LOW);
      delay(1000);
      digitalWrite(verde, LOW);
      digitalWrite(amarelo, HIGH);
      digitalWrite(vermelho, LOW);
      digitalWrite(branco, HIGH);
      digitalWrite(azul, LOW);
      digitalWrite(laranja, HIGH);
      delay(1000);
    }
  
    if(texto == "4"){
      digitalWrite(verde, HIGH);
      digitalWrite(amarelo, HIGH);
      digitalWrite(vermelho, HIGH);
      digitalWrite(branco, HIGH);
      digitalWrite(azul, HIGH);
      digitalWrite(laranja, HIGH);
      delay(2000);
    }
  
    if(texto == "5"){
      digitalWrite(verde, HIGH);
      digitalWrite(amarelo, LOW);
      digitalWrite(vermelho, LOW);
      digitalWrite(branco, LOW);
      digitalWrite(azul, LOW);
      digitalWrite(laranja, HIGH);
      delay(500);
      digitalWrite(verde, HIGH);
      digitalWrite(amarelo, HIGH);
      digitalWrite(vermelho, LOW);
      digitalWrite(branco, LOW);
      digitalWrite(azul, HIGH);
      digitalWrite(laranja, HIGH);
      delay(500);
      digitalWrite(verde, HIGH);
      digitalWrite(amarelo, HIGH);
      digitalWrite(vermelho, HIGH);
      digitalWrite(branco, HIGH);
      digitalWrite(azul, HIGH);
      digitalWrite(laranja, HIGH);
      delay(500);
      digitalWrite(verde, LOW);
      digitalWrite(amarelo, LOW);
      digitalWrite(vermelho, LOW);
      digitalWrite(branco, LOW);
      digitalWrite(azul, LOW);
      digitalWrite(laranja, LOW);
      delay(500);
      digitalWrite(verde, HIGH);
      digitalWrite(amarelo, LOW);
      digitalWrite(vermelho, LOW);
      digitalWrite(branco, LOW);
      digitalWrite(azul, LOW);
      digitalWrite(laranja, HIGH);
      delay(500);
      digitalWrite(verde, HIGH);
      digitalWrite(amarelo, HIGH);
      digitalWrite(vermelho, LOW);
      digitalWrite(branco, LOW);
      digitalWrite(azul, HIGH);
      digitalWrite(laranja, HIGH);
      delay(500);
      digitalWrite(verde, HIGH);
      digitalWrite(amarelo, HIGH);
      digitalWrite(vermelho, HIGH);
      digitalWrite(branco, HIGH);
      digitalWrite(azul, HIGH);
      digitalWrite(laranja, HIGH);
      delay(500);
      digitalWrite(verde, LOW);
      digitalWrite(amarelo, LOW);
      digitalWrite(vermelho, LOW);
      digitalWrite(branco, LOW);
      digitalWrite(azul, LOW);
      digitalWrite(laranja, LOW);
      delay(500);
      digitalWrite(verde, HIGH);
      digitalWrite(amarelo, LOW);
      digitalWrite(vermelho, LOW);
      digitalWrite(branco, LOW);
      digitalWrite(azul, LOW);
      digitalWrite(laranja, HIGH);
      delay(500);
      digitalWrite(verde, HIGH);
      digitalWrite(amarelo, HIGH);
      digitalWrite(vermelho, LOW);
      digitalWrite(branco, LOW);
      digitalWrite(azul, HIGH);
      digitalWrite(laranja, HIGH);
      delay(500);
      digitalWrite(verde, HIGH);
      digitalWrite(amarelo, HIGH);
      digitalWrite(vermelho, HIGH);
      digitalWrite(branco, HIGH);
      digitalWrite(azul, HIGH);
      digitalWrite(laranja, HIGH);
      delay(500);
    
  }
}