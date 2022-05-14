int verrin_pin1 = 2;
int verrin_pin2 = 3;


void setup() {
  // put your setup code here, to run once:
  pinMode(verrin_pin1, OUTPUT);
  pinMode(verrin_pin2, OUTPUT);
}

void loop() {
  int lum = analogRead(A0);

  if (lum > 300) {
    digitalWrite(verrin_pin1, HIGH);
    digitalWrite(verrin_pin2, LOW);
  }
  else {
    digitalWrite(verrin_pin1, LOW);
    digitalWrite(verrin_pin2, HIGH);
  }

  delay(1000000);
}
