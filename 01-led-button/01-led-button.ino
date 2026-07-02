const int ledPin1 = 27;
const int ledPin2 = 12;
const int buttonPin1 = 32;
const int buttonPin2 = 33;
const int check = 2;
bool state1 = false;
bool state2 = false;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(buttonPin1, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
  Serial.begin(9600);
  delay(1000);
  Serial.println("ESP32 Initialization Complete.");
}

void loop() {
  if(digitalRead(buttonPin1) == LOW){
    state1 = !state1;
  } 
  if(digitalRead(buttonPin2) == LOW){
    state2 = !state2;
  }
  if(state1){
    digitalWrite(ledPin1, HIGH);
  }else{
    digitalWrite(ledPin1, LOW);
  }
  if(state2){
    digitalWrite(ledPin2, HIGH);
  }else{
    digitalWrite(ledPin2, LOW);
  }
  delay(200);

}
