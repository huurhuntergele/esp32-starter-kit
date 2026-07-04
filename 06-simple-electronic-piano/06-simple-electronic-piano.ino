const int buzzerPin = 32;
const int buttonPins[7] = {19, 18, 5, 21, 22, 23, 25};
const int notes[7] = {262, 294, 330, 349, 392, 440, 494};


void setup() {
  ledcAttach(buzzerPin, 5000, 8);

  for (int i = 0; i < 7; i++) {
    pinMode(buttonPins[i], INPUT_PULLUP);
  }

}

void loop() {
  int pressed = 8;
  for(int i = 0; i<7; i++){
    if(digitalRead(buttonPins[i]) == LOW){
      pressed = i;
    }
  }

  if(pressed != 8){
    ledcWriteTone(buzzerPin, notes[pressed]);
  }else{
    ledcWriteTone(buzzerPin, 0);
  }

}
