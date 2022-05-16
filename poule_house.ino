// Déclaration des deux pin connectés vers le pont en H
int verrin_pin1 = 2;
int verrin_pin2 = 3;

//Déclaration des deux pin en mode output
void setup() {
  pinMode(verrin_pin1, OUTPUT);
  pinMode(verrin_pin2, OUTPUT);
}

//Boucle qui permet de lire toutes les 10 minutes la valeur renvoyée par la LDR
//Si la valeur est inférieure à 300, le verrin se ferme, sinon il s'ouvre.

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
