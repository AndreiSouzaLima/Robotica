int RED1 = 11;
int BLU1 = 10;
int GRE1 = 9;

String texto;
void setup()
{
  pinMode(RED1, OUTPUT);
  pinMode(BLU1, OUTPUT);
  pinMode(GRE1, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  while (Serial.available() > 0)
  {
    texto = Serial.readString();
  }
    Serial.println(texto);

    if(texto == "R"){
      analogWrite(RED1, 255);
      analogWrite(BLU1, 0);
      analogWrite(GRE1, 0);
    }
      
    if(texto == "G"){
      analogWrite(RED1, 0);
      analogWrite(BLU1, 0);
      analogWrite(GRE1, 255);
    }
    if(texto == "B"){
      analogWrite(RED1, 0);
      analogWrite(BLU1, 255);
      analogWrite(GRE1, 0);
    }
}