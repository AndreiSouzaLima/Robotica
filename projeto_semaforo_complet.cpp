#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
#define BUT A2

#define ama 7
#define verm 8
#define verd 13

#define RED 6
#define BLU 10 
#define GRE 9

int stateBUT;

void setup(){
  lcd.begin(16, 2);
  pinMode(BUT, INPUT);
  pinMode(ama, OUTPUT);
  pinMode(verm, OUTPUT);
  pinMode(verd, OUTPUT);
  pinMode(RED, OUTPUT);
  pinMode(BLU, OUTPUT);
  pinMode(GRE, OUTPUT);
  Serial.begin(9600);

  
  }

void loop(){
  delay(100);
  stateBUT = digitalRead(BUT);
Serial.println(stateBUT);
  
  if (stateBUT == HIGH){
    
    digitalWrite(ama, HIGH);
  digitalWrite(verm, LOW);
  digitalWrite(verd, LOW);
  analogWrite(RED, 255);
  analogWrite(BLU, 0);
  analogWrite(GRE, 0);
  delay(2000);
  digitalWrite(ama, LOW);
  digitalWrite(verm, HIGH);
  digitalWrite(verd, LOW);
  analogWrite(RED, 0);
  analogWrite(BLU, 0);
  analogWrite(GRE, 255);
  for (int n = 10; 0<n; n-- ){
    lcd.clear();
    lcd.setCursor(1, 1);
    lcd.print(n);
    delay(1000);
    }
     

  else{
    lcd.clear(); 
     digitalWrite(ama, LOW);
  digitalWrite(verm, LOW);
  digitalWrite(verd, HIGH);
  analogWrite(RED, 255);
  analogWrite(BLU, 0);
  analogWrite(GRE, 0);
    }
