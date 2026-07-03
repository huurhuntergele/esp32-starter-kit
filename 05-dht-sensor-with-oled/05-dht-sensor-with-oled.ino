#include <DHT.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);


DHT dht(33, DHT11);
void setup() {
  dht.begin();
  delay(2000);

  Serial.begin(115200);
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { 
    Serial.println("screen failed");
    for(;;);
  }
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);
}

void loop() {
  float temp = dht.readTemperature();
  float humidity = dht.readHumidity();

  Serial.println("Temp:");
  Serial.print(temp);
  Serial.print("C  ");
  Serial.println("Humidity");
  Serial.print(humidity);
  Serial.println("%");

  display.clearDisplay();
  display.setCursor(0, 0);

  display.println("Temp: ");
  display.print(temp);
  display.println("C");
  display.print("Humidity: ");
  display.print(humidity);
  display.println("%");

  display.display();

  delay(2000);

}
