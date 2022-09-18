int leds[6] = {7, 8, 9 ,10, 11, 12};

void setup() {
  // put your setup code here, to run once:
  
  for (int x = 0; x <= 5; x = x + 1) {
    pinMode(leds[x], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  for (int led = 0; led <=5; led = led + 1) {
    digitalWrite(leds[led], HIGH);
    delay(200);
    digitalWrite(leds[led], LOW);
    delay(200);
  }

  for (int led = 5; led >=0; led = led - 1) {
    digitalWrite(leds[led], HIGH);
    delay(200);
    digitalWrite(leds[led], LOW);
    delay(200);
  }
}
