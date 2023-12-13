int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;
int punto = 9;
int button = 12;
int lectura;
int cuenta = 0;
int led = 13;

void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);

}

void loop() {
  // Leer entrada (asegúrate de conectar la entrada a un pin válido)
  
  // lectura = digitalRead(button);
  while(cuenta<=10) {
    int estadoLed = digitalRead(led);
    if(cuenta == 0) { cero(); }
    if(cuenta == 1) { uno(); }
    if(cuenta == 2) { dos(); }
    if(cuenta == 3) { tres(); }
    if(cuenta == 4) { cuatro(); }
    if(cuenta == 5) { cinco(); }
    if(cuenta == 6) { seis(); }
    if(cuenta == 7) { siete(); }
    if(cuenta == 8) { ocho(); }
    if(cuenta == 9) { nueve(); }
    if(cuenta == 10) { 
      cuenta = 0; 
      cero(); 
      digitalWrite(led, !estadoLed);
      
    }
    delay(500);
    cuenta++;
  }
  
  
  
}

void dot() {
  digitalWrite(punto, HIGH);
}

void borrado() {
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void cero() {
  borrado();
  digitalWrite(g, LOW);
}

void uno() {
  borrado();
  digitalWrite(a, LOW);
  digitalWrite(f, LOW);
  digitalWrite(e, LOW);
  digitalWrite(d, LOW);
  digitalWrite(g, LOW);
}

void dos() {
  borrado();
  digitalWrite(f, LOW);
  digitalWrite(c, LOW);
}

void tres() {
  borrado();
  digitalWrite(f, LOW);
  digitalWrite(e, LOW);
}

void cuatro() {
  borrado();
  digitalWrite(a, LOW);
  digitalWrite(e, LOW);
  digitalWrite(d, LOW);
}

void cinco() {
  borrado();
  digitalWrite(b, LOW);
  digitalWrite(e, LOW);
}

void seis() {
  borrado();
  digitalWrite(f, LOW);
}

void siete() {
  borrado();
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(e, LOW);
  digitalWrite(d, LOW);

}

void ocho() {
  borrado();
}

void nueve() {
  borrado();
  digitalWrite(e, LOW);
}
