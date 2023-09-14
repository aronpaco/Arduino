int potPin = A0;
int ledPin = 3;

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
  pinMode(potPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  int potValue = analogRead(potPin); // 0-1023 = 0V - 5V
  int mappedValue = map(potValue,0,1023,0,255);
  Serial.println(mappedValue);
  analogWrite(ledPin, mappedValue);
  delay(50);
}
