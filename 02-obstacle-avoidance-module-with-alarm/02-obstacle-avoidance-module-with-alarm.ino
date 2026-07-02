const int sensorPin = 32;
const int buzzerPin = 12;
int avoidState = 0;

void setup() {
  Serial.begin(9600);
  delay(1000);
  Serial.print("\nesp32 is ready!");
  pinMode(sensorPin, INPUT);
  pinMode(buzzerPin, OUTPUT);

}

void loop() {
  avoidState = digitalRead(sensorPin);
  if(avoidState == 0){
    digitalWrite(buzzerPin, HIGH);
  }else{
    digitalWrite(buzzerPin, LOW);
  }
}
