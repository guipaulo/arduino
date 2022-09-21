int ledG = 2;
int ledF = 3;
int ledB = 4;
int ledA = 5;
int ledE = 6;
int ledD = 7;
int ledC = 8;

void numero0() {
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
}

void numero1() {
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
}

void numero2() {
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledG, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledD, HIGH);
}

void numero3() {
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledG, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, HIGH);
}

void numero4() {
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
}

void numero5() {
  digitalWrite(ledA, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, HIGH);
}

void numero6() {
  digitalWrite(ledA, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledG, HIGH);
}

void numero7() {
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
}

void numero8() {
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
}

void numero9() {
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
}

void resert() {
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);
}

void setup() {
  // put your setup code here, to run once:

  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(ledC, OUTPUT);
  pinMode(ledD, OUTPUT);
  pinMode(ledE, OUTPUT);
  pinMode(ledF, OUTPUT);
  pinMode(ledG, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int tempo = 1000;

  numero0();
  delay(tempo);
  resert();
  
  numero1();
  delay(tempo);
  resert();
  
  numero2();
  delay(tempo);
  resert();
  
  numero3();
  delay(tempo);
  resert();
  
  numero4();
  delay(tempo);
  resert();
  
  numero5();
  delay(tempo);
  resert();
  
  numero6();
  delay(tempo);
  resert();
  
  numero7();
  delay(tempo);
  resert();
  
  numero8();
  delay(tempo);
  resert();
  
  numero9();
  delay(tempo);
  resert();

  delay(50);
}
