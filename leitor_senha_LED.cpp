const int led_verde = 11; 
const int led_vermelho = 13; 

char senha_correta[] = "1a2b3c";
char senha_digitada[7];
int indice_senha = 0;

void setup() {
  pinMode(led_verde, OUTPUT); 
  pinMode(led_vermelho, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (indice_senha < 6) { 
    if (Serial.available()) {
      char tecla = Serial.read();
      if (isalnum(tecla)) { 
        senha_digitada[indice_senha] = tecla;
        indice_senha++;
        Serial.print(tecla);
      }
    }
  } else {
    senha_digitada[6] = '\0';
    Serial.println();
    if (strcmp(senha_digitada, senha_correta) == 0) {
      digitalWrite(led_verde, HIGH);
      digitalWrite(led_vermelho, LOW);
    } else {
      digitalWrite(led_verde, LOW);
      digitalWrite(led_vermelho, HIGH);
    }
    indice_senha = 0;
    for (int i = 0; i < 7; i++) {
      senha_digitada[i] = '\0';
    }
  }
}