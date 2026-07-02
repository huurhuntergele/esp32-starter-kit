const int sensorPin = 13;
const int ledPin = 33;

void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);
  Serial.println("\nSensor is warming up. Do not move!");
  delay(40000);
  Serial.print("Ready to detect ! Move your body xD");

}

void loop() {
  int output;
  output = digitalRead(sensorPin);
  if (output == 1){
    digitalWrite(ledPin, HIGH);
  }else{
    digitalWrite(ledPin, LOW);
  }

  delay(50);

}
