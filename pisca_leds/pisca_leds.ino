void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(7, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    
    int estadoBotao = digitalRead(7);

    
    digitalWrite(8, estadoBotao);
    digitalWrite(9, !estadoBotao);
}
