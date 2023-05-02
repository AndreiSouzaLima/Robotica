
#define L1 8

#define pino_t 5 
#define pino_e 4
float distanciaCM;

long distancia(int trigger,int echo){  
  pinMode(trigger,OUTPUT);
  digitalWrite(trigger,LOW);
  delayMicroseconds(2);
  
  digitalWrite(trigger,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger,LOW);
  
  pinMode(echo,INPUT);

  float tempo = pulseIn(echo,HIGH);
  return 0.01723*tempo;
}
void setup(){
  pinMode(L1, OUTPUT);
  }

  void loop(){
    distanciaCM=distancia(pino_t,pino_e);
  	Serial.println(distanciaCM);
    digitalWrite(L1, HIGH);
    delay(distanciaCM*100);
    digitalWrite(L1, LOW);
    delay(distanciaCM*100);
    if (distanciaCM > 30){
    digitalWrite (L1,HIGH);
    delay (800);
    digitalWrite (L1,LOW);
  }
  if (distanciaCM >= 20 && distanciaCM <= 30){
    digitalWrite (L1,HIGH);
    delay (600);
    digitalWrite (L1,LOW);
  }
  if (distanciaCM >= 10 && distanciaCM <= 20){
    digitalWrite (L1,HIGH);
    delay (400);
    digitalWrite (L1,LOW);
  }
  if (distanciaCM < 10){
    digitalWrite (L1,HIGH);
    delay (100);
    digitalWrite (L1,LOW);
  }

  