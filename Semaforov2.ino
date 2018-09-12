#define pinBoton 2
#define pinLedVerde 3
#define pinLedAmarillo 4
#define pinLedRojo 5
#define pinLedVerdeP 10
#define pinLedRojoP 11
#define pinLedIndicadorBoton 9
#define pot 1
const int tiempoLedVerde = 5000;
const int tiempoLedAmarillo = 2500;
const int tiempoLedRojo = 5000;
const int tiempoParpadeo = 600;
boolean flag = false;
float contador = 0;
int valorPot = 0;

void setup() {
  pinMode(pinBoton, INPUT_PULLUP);
  pinMode(pinLedVerde, OUTPUT);
  pinMode(pinLedAmarillo, OUTPUT);
  pinMode(pinLedRojo, OUTPUT);
  pinMode(pinLedVerdeP, OUTPUT);
  pinMode(pinLedRojoP, OUTPUT);
  pinMode(pinLedIndicadorBoton, OUTPUT);
  Serial.begin(9600);
}

void loop() { 
  contador += 0.157;
  valorPot = analogRead(pot)*20;
  
  if(digitalRead(pinBoton) == HIGH) {
    flag = true;
  }else {
    flag = false;
  }

  if(contador >= (valorPot)) {
    digitalWrite(pinLedIndicadorBoton, HIGH);
  }
  
  if(flag == true) { //semaforo normal
    apagarLeds();
    digitalWrite(pinLedVerde, HIGH);    
    digitalWrite(pinLedRojoP, HIGH);
  }else if(contador >= (valorPot)) {
    contador = 0;
    digitalWrite(pinLedIndicadorBoton, LOW);
    delay(tiempoParpadeo);    
    digitalWrite(pinLedVerde, LOW);
    delay(tiempoParpadeo);    
    digitalWrite(pinLedVerde, HIGH);
    delay(tiempoParpadeo);    
    digitalWrite(pinLedVerde, LOW);
    delay(tiempoParpadeo);
    digitalWrite(pinLedVerde, HIGH);
    delay(tiempoParpadeo);    
    digitalWrite(pinLedVerde, LOW);
    delay(tiempoParpadeo);
    digitalWrite(pinLedAmarillo, HIGH);
    delay(tiempoLedAmarillo);
    digitalWrite(pinLedAmarillo, LOW);
    digitalWrite(pinLedRojoP, LOW);
    digitalWrite(pinLedRojo, HIGH);
    digitalWrite(pinLedVerdeP, HIGH);
    delay(tiempoLedRojo); 
    flag = true;  
  }  
}

void apagarLeds() {
  digitalWrite(pinLedVerde, LOW);
  digitalWrite(pinLedAmarillo, LOW);
  digitalWrite(pinLedRojo, LOW);
  digitalWrite(pinLedVerdeP, LOW);
  digitalWrite(pinLedRojoP, LOW);
}
