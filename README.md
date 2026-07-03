
# ESP32 Starter Kit
Bought this ESP32 starter kit from AliExpress and built a bunch of small projects by mixing and matching the parts.


### Components
- ESP32 Development Board
- 0.96 inch OLED
- Breadboard
- Obstacle Avoidance Module
- Photosensitive Resistor Module
- DHT temperature sensor
- HC-SR501 PIR Motion Sensor
- Passive/Active Buzzers
- Button Switch
- Potentiometer
- Relay Module
- LED-RGB
- LED-Red, Yellow, Green
 


## 01. Catch the red game
### Circuit Diagram


| Wokwi Simulation Diagram 
| :---: |
|<img width="786" height="317" alt="image-removebg-preview (13)" src="https://github.com/user-attachments/assets/ba758d20-b24b-4673-a97f-0af2fd4339ac" />|
**note**: Test your reflexes in this interactive LED chase game! Use the potentiometer to adjust the speed of the chasing pattern and try to press the button exactly when the Red LED is illuminated to score points. Scores will show in serial monitor.

### Wiring
| Component | Component Pin | ESP32 GPIO Pin | Wire Color |
| :--- | :--- | :--- | :--- |
| **LED 1 (Top)** | Anode (via Resistor) | **GPIO 32** | Yellow |
| | Cathode (-) | **GND** | Black |
| **LED 2** | Anode (via Resistor) | **GPIO 33** | Brown |
| | Cathode (-) | **GND** | Black |
| **LED 3** | Anode (via Resistor) | **GPIO 27** | Pink |
| | Cathode (-) | **GND** | Black |
| **LED 4 (Red)** | Anode (via Resistor) | **GPIO 14** | Gray |
| | Cathode (-) | **GND** | Black |
| **LED 5** | Anode (via Resistor) | **GPIO 13** | Cyan |
| | Cathode (-) | **GND** | Black |
| **LED 6 (Bottom)** | Anode (via Resistor) | **GPIO 19** | Green |
| | Cathode (-) | **GND** | Black |
| **Push Button** | Input Side | **GPIO 18** | Pink |
| | Ground Side | **GND** | Black |
## 02. Obstacle Avoidance Module and Active Buzzer
### Circuit Diagram
| Wokwi Simulation Diagram 
| :---: |
|<img width="741" height="337" alt="image-removebg-preview (3)" src="https://github.com/user-attachments/assets/9bac1d0e-da2e-4769-9dc8-7e2ac087fe71" />|
**note**: The obstacle sensor outputs on GPIO32 will always be 0 (obstacle) or 1 (no obstacle). The ESP32 continuously polls the state using "digitalRead(32)". If the state is 0, the code triggers the buzzer by setting GPIO12 to HIGH.
### Wiring
| Component | Component Pin | ESP32 GPIO Pin | Wire Color |
| :--- | :--- | :--- | :--- |
| **Buzzer** | Positive (+) | **GPIO 12** | Green |
| | Negative (-) | **GND** | Black |
| **Obstacle Sensor** | DAT (OUT) | **GPIO 32** | Blue |
| | VCC | **3V3** | Red |
| | GND | **GND** | Black |

## 03. RGB LED Controlled by Potentiometer
### Circuit Diagram
| Wokwi Simulation Diagram 
| :---: |
|<img width="713" height="350" alt="image-removebg-preview (5)" src="https://github.com/user-attachments/assets/07edbba7-d98a-470d-a407-f17fb0a4d266" />|
**note**: The ESP32 reads analog voltage from potentiometer (0 to 4095) and maps it into 7 steps (0 to 6). A switch case cycles through different color combination(red->yellow->green->cyan->blue->purple->white) based on the knob's position.
### Wiring
| Component | Component Pin | ESP32 GPIO Pin | Wire Color |
| :--- | :--- | :--- | :--- |
| **RGB LED** | Red Anode (via Resistor) | **GPIO 32** | Red |
| | Green Anode (via Resistor) | **GPIO 33** | Green |
| | Blue Anode (via Resistor) | **GPIO 14** | Blue |
| | Common Cathode (-) | **GND** | Black |
| **Potentiometer** | Left Pin | **Vin** | Yellow |
| | Middle Pin (Wiper) | **GPIO 34** | Brown |
| | Right Pin | **GND** | Black |

## 04. LED automated by Motion Sensor and Photosensitive Resistor Module
 
### Circuit Diagram
| Wokwi Simulation Diagram 
| :---: |
|<img width="822" height="304" alt="image-removebg-preview (8)" src="https://github.com/user-attachments/assets/2472b3c4-5f14-47ea-aaf2-6b2fb4cb1b28" />|
**note**: The LED will only trigger when **both** conditions are met: the PIR sensor detects motion AND the photoresistor detects a dark environment.
### Wiring
| Component | Component Pin | ESP32 GPIO Pin | Wire Color |
| :--- | :--- | :--- | :--- |
| **Red LED** | Anode (+) via Resistor | **GPIO 13** | Green |
| | Cathode (-) | **GND** | Black |
| **PIR Motion Sensor** | VCC (+) | **5V / VIN** | Red |
| | OUT (D) | **GPIO 27** | Blue |
| | GND (-) | **GND** | Black |
| **Photosensitive Module** | VCC | **3V3 (3.3V)** | Red |
| | A0 (Analog Out) | **GPIO 33** | Yellow  |
| | GND | **GND** | Black |

## 05. DHT11 with 0.96 inch OLED 
### Circuit Diagram
| Wokwi Simulation Diagram 
| :---: |
|<img width="729" height="342" alt="image-removebg-preview (10)" src="https://github.com/user-attachments/assets/5362048f-9201-4cc7-9d59-bb7ad8decf6e" />|
**note**: Show temperature and humidity data from DHT11 sensor  on 0.96 inch  OLED display       




### Wiring
| Component | Component Pin | ESP32 GPIO Pin | Wire Color  |
| :--- | :--- | :--- | :--- |
| **OLED Display (I2C)** | GND | **GND** | Black |
| | VCC | **5V** | Red |
| | SCL | **GPIO 22** | Yellow |
| | SDA | **GPIO 21** | Blue |
| **DHT11 Sensor** | VCC (+) | **5V** | Red |
| | Data | **GPIO 33** | Green |
| | GND (-) | **GND** | Black |

tried everything except relay and passive buzzer. SEEYA
<img width="187" height="155" alt="image" src="https://github.com/user-attachments/assets/ab9c0169-bae6-4236-8e42-d1cdd045dc4e" />






