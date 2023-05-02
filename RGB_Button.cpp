const int RED1 = 11;
const int BLU1 = 10;
const int GRE1 = 9;
const int Button = 3;
int lerButton;
int valor = 0;


void setup()
{
  pinMode(RED1, OUTPUT);
  pinMode(BLU1, OUTPUT);
  pinMode(GRE1, OUTPUT);
  pinMode(Button, INPUT);
  Serial.begin(9600);

}

void loop(){
  lerButton = digitalRead(Button);
  
  if (lerButton == HIGH){
    analogWrite(RED1, 20);
    analogWrite(BLU1, 255);
    analogWrite(GRE1, 255);
    delay(200);   
  }
  
  lerButton = digitalRead(Button);
  
  if (lerButton == HIGH){
    analogWrite(RED1, 255);
    analogWrite(BLU1, 220);
    analogWrite(GRE1, 20);
    delay(300);   
  }
  
  lerButton = digitalRead(Button);
  
  if (lerButton == HIGH){
    analogWrite(RED1, 100);
    analogWrite(BLU1, 255);
    analogWrite(GRE1, 100);
    delay(300);
  }
  
  lerButton = digitalRead(Button);
  
  if (lerButton == HIGH){
    analogWrite(RED1, 255);
    analogWrite(BLU1, 120);
    analogWrite(GRE1, 220);
    delay(300);
  }
}