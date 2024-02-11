int ledPins[6] = {3, 5, 6, 9, 10, 11};
void setup() {
  pinMode(ledPins[0, 1, 2, 3, 4, 5], OUTPUT);
}
int brightness = 100;
int off = 0;
int pause = 100;

void blueAllOn() {
  for (int led = 0; led <= 2; led++) {
    analogWrite(ledPins[led], brightness);
  };
}
void blueAllOff() {
  for (int led = 0; led <= 2; led++) {
    analogWrite(ledPins[led], off);
  };
}
void redAllOn() {
  for (int led = 3; led <= 5; led++) {
    analogWrite(ledPins[led], brightness);
  };
}
void redAllOff() {
  for (int led = 3; led <= 5; led++) {
    analogWrite(ledPins[led], off);
  };
}

void blueAllBlink() {
  blueAllOn();
  delay(pause);
  blueAllOff();
  delay(pause);
  blueAllOn();
  delay(pause);
  blueAllOff();
  delay(pause);
}
void redAllBlink() {
  redAllOn();
  delay(pause);
  redAllOff();
  delay(pause);
  redAllOn();
  delay(pause);
  redAllOff();
  delay(pause);
}

void evenOn() {
  for (int led = 0; led <= 4; led = led + 2) {
    analogWrite(ledPins[led], brightness);
  };
}
void evenOff() {
  for (int led = 0; led <= 4; led = led + 2) {
    analogWrite(ledPins[led], off);
  };
}
void oddOn() {
  for (int led = 1; led <= 5; led = led + 2) {
    analogWrite(ledPins[led], brightness);
  };
}
void oddOff() {
  for (int led = 1; led <= 5; led = led + 2) {
    analogWrite(ledPins[led], off);
  };
}

void evenBlink() {
  evenOn();
  delay(pause);
  evenOff();
  delay(pause);
}
void oddBlink() {
  oddOn();
  delay(pause);
  oddOff();
  delay(pause);
}



void mode1() {
  blueAllBlink();
  delay(pause);
  redAllBlink();
  delay(pause);
}

void mode2() {
  evenBlink();
  delay(50);
  oddBlink();
  delay(50);
}

void mode3() {
  for (int led = 0; led <= 5; led++) {
    analogWrite(ledPins[led], brightness);
    delay(500);
    analogWrite(ledPins[led + 1], brightness);
    delay(500);
    analogWrite(ledPins[led], off);
  }
  for (int led = 5; led >= 0; led--) {
    analogWrite(ledPins[led], brightness);
    delay(500);
    if (led > 0) {
      analogWrite(ledPins[led - 1], brightness);
    }
    delay(500);
    analogWrite(ledPins[led], off);
  }
}

void loop() {
  mode3();
}







