int ledPins[] = {32, 33, 27, 14, 13, 19};
int numLEDs = 6;
int buttonPin = 18;
int delayMode[]={10,20,30,50,75,100,150};
int score = 0;

void setup() {
  for (int i = 0; i < numLEDs; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(115600);
}

void loop() {
  int potValue = analogRead(34);
  int mode = map(potValue, 0, 4095, 0, 6);

  for (int i = 0; i < numLEDs; i++) {
    digitalWrite(ledPins[i], HIGH);

    if (digitalRead(buttonPin) == LOW) {
      if (i == 3) {
        score++;
        Serial.print("Score:");
        Serial.println(score);
      }
      while (digitalRead(buttonPin) == LOW) {} 
      delay(30); 
    }

    delay(delayMode[mode]);
    digitalWrite(ledPins[i], LOW);
  }
}