int Vermelho = 13;
int Amarelo = 12;
int Verde = 11;

int PEDVermelho = 9;
int PEDVerde = 10;
void setup() {
  pinMode(Vermelho, OUTPUT);
  pinMode(Amarelo, OUTPUT);
  pinMode(Verde, OUTPUT);
  pinMode(PEDVermelho, OUTPUT);
  pinMode(PEDVerde, OUTPUT);
  

}

void loop() {
  digitalWrite(Vermelho, HIGH);
  digitalWrite(Amarelo, LOW);
  digitalWrite(Verde, LOW);
  digitalWrite(PEDVermelho, LOW);
  digitalWrite(PEDVerde, HIGH);
  delay(8000);
 
  
  digitalWrite(Vermelho, HIGH);
  digitalWrite(Amarelo, HIGH);
  digitalWrite(Verde, LOW);
  digitalWrite(PEDVermelho, LOW);
  digitalWrite(PEDVerde, HIGH);
  delay(2000);
  
  
  digitalWrite(Vermelho, LOW);
  digitalWrite(Amarelo, LOW);
  digitalWrite(Verde, HIGH);
  digitalWrite(PEDVermelho, HIGH);
  digitalWrite(PEDVerde, LOW);
  delay(10000);

}