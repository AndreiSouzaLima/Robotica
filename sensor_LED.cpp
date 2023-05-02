#define L1 8
#define L2 9
#define L3 10
#define L4 11

#define pino_t 5 
#define pino_e 4
float distanciaCM;

long distancia(int trigger,int echo){  
  //Limpa o trigger
  pinMode(trigger,OUTPUT);
  digitalWrite(trigger,LOW);
  delayMicroseconds(2);
  
  //Setar o pino HIGH estado para 10 microseconds
  digitalWrite(trigger,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger,LOW);
  
  pinMode(echo,INPUT);
  //Lê o pino echo e retorma o tempo de viagem do som em microsegundos
  float tempo = pulseIn(echo,HIGH);
  return 0.01723*tempo; //L=(DT*VS)/2
}


void setup (){
  pinMode (L1, OUTPUT);
  pinMode (L2, OUTPUT);
  pinMode (L3, OUTPUT);
  pinMode (L4, OUTPUT);
  Serial.begin(9600);
}
void loop(){
  distanciaCM=distancia(pino_t,pino_e);
  Serial.println(distanciaCM);
  
  digitalWrite (L1,LOW);
  digitalWrite (L2,LOW);
  digitalWrite (L3,LOW);
  digitalWrite (L4,LOW);
  if (distanciaCM > 30){
    digitalWrite (L1,HIGH);
  }
  if (distanciaCM >= 20 && distanciaCM <= 30){
    digitalWrite (L1,HIGH);
    digitalWrite (L2,HIGH);
  }
  if (distanciaCM >= 10 && distanciaCM <= 20){
    digitalWrite (L1,HIGH);
    digitalWrite (L2,HIGH);
    digitalWrite (L3,HIGH);
  }
  if (distanciaCM < 10){
    digitalWrite (L1,HIGH);
    digitalWrite (L2,HIGH);
    digitalWrite (L3,HIGH);
    digitalWrite (L4,HIGH);
  }
}