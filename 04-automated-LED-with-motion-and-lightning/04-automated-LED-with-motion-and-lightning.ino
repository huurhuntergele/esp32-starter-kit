const int ledPin = 13;
const int photoPin = 33;
const int sensorPin = 27;

unsigned long warmupStartTime;
bool isWarmedUp = false;
const unsigned long WARMUP_DURATION = 20000;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);

  Serial.begin(115200);
  Serial.println("\nESP32 is ready!");
  Serial.println("Motion sensor is warming up! Do not move");

  warmupStartTime = millis();

}

void loop() {
  if (!isWarmedUp) {
    if (millis() - warmupStartTime >= WARMUP_DURATION) {
      isWarmedUp = true; 
      Serial.println("Motion sensor started!");
    } else {
      return; 
    }
  }

  int isMoving = digitalRead(sensorPin);
  int lightValue = analogRead(photoPin);
  Serial.printf("Motion: %d | Light: %d\n", isMoving, lightValue);
  if(isMoving == 1 && lightValue > 1500){
    digitalWrite(ledPin, HIGH);
  }else{
    digitalWrite(ledPin, LOW);
  }
  delay(200);
}