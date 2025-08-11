const int ledPins[] = {1, 2, 3, 4, 5};
const int numLeds = 5;

void setup() {
  for(int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {

  for(int i = 0; i < numLeds; i++) {
      digitalWrite(ledPins[i], HIGH);
      delay(100);
      digitalWrite(ledPins[i], LOW);
      delay(100);
    }
  for(int i = 0; i < numLeds; i++) {
      digitalWrite(ledPins[i], HIGH);
      delay(100);
      digitalWrite(ledPins[i], LOW);
      delay(100);
  }
}
