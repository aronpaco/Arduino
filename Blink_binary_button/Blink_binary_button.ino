int nupuPin = 2;
int number = 0;

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
  pinMode(nupuPin, INPUT_PULLUP);
}

// the loop function runs over and over again forever
void loop() {
  int nupuVaartus = digitalRead(nupuPin);
  if (nupuVaartus == HIGH) {
    Serial.println(number);
    number = number + 1;
  }
  delay(150);
}
