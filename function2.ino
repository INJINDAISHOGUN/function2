int bt = 17;
int wifi = 2;
int ntp = 15;
int iot = 12;

void setup() {
  pinMode(bt, OUTPUT);
  pinMode(wifi, OUTPUT);
  pinMode(ntp, OUTPUT);
  pinMode(iot, OUTPUT); 
}

void loop() {
  forward();
  delay(1000);
  backward();
  delay(1000);
  turnleft();
  delay(1000);
  turnright();
  delay(1000);
  stopped();
  delay(2000);
}

void forward(){ //0101
  digitalWrite(bt, HIGH);
  digitalWrite(wifi, LOW);
  digitalWrite(ntp, HIGH);
  digitalWrite(iot, LOW);
}

void backward(){ //1010
  digitalWrite(bt, LOW);
  digitalWrite(wifi, HIGH);
  digitalWrite(ntp, LOW);
  digitalWrite(iot, HIGH);
}

void turnleft(){ //0001
  digitalWrite(bt, LOW);
  digitalWrite(wifi, HIGH);
  digitalWrite(ntp, HIGH);
  digitalWrite(iot, LOW);
}

void turnright(){ //0110
  digitalWrite(bt, HIGH);
  digitalWrite(wifi, LOW);
  digitalWrite(ntp, LOW);
  digitalWrite(iot, HIGH);
}

void stopped(){ //0000
  digitalWrite(bt, HIGH);
  digitalWrite(wifi, HIGH);
  digitalWrite(ntp, HIGH);
  digitalWrite(iot, HIGH);
}
