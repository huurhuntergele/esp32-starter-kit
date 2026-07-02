const int redPin=32;
const int greenPin = 33;
const int bluePin = 14;
const int potPin = 34;

void setRGB(byte redState, byte greenState, byte blueState){
  digitalWrite(redPin, redState);
  digitalWrite(greenPin, greenState);
  digitalWrite(bluePin, blueState);
}
void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

}

void loop() {
  int potValue = analogRead(potPin);
  int mode = map(potValue, 0, 4095, 0, 6);

  switch (mode){
    case 0: 
      setRGB(HIGH, LOW, LOW);
      break;
    case 1: 
      setRGB(HIGH, HIGH, LOW);
      break;
    case 2: 
      setRGB(LOW, HIGH, LOW);
      break;
    case 3: 
      setRGB(LOW, HIGH, HIGH);
      break;
    case 4: 
      setRGB(LOW, LOW, HIGH);
      break;
    case 5: 
      setRGB(HIGH, LOW, HIGH);
      break;
    case 6: 
      setRGB(HIGH, HIGH, HIGH);
      break;
    default:
      setRGB(LOW, LOW, LOW);
      break;


  }

}
