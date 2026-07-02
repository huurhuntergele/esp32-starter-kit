# ESP32 Starter Kit
I bought this ESP32 basic starter kit from AliExpress and tried everything inside.
### Components
- ESP32 Development Board
- 0.96 inch OLED
- Breadboard
- Obstacle Avoidance Module
- Photosensitive Resistor Module
- DHT temparature sensor
- HC-SR501 PIR Motion Sensor
- Passive/Active Buzzers
- Button Switch
- Potentiometer
- Relay Module
- LED-RGB
- LED-Red, Yellow, Green
  

## 01. LEDs and Buttons
### Circuit Diagram
| Wokwi Simulation Diagram 
| :---: |
|<img width="652" height="383" alt="image-removebg-preview (4)" src="https://github.com/user-attachments/assets/93fee753-47ee-499b-87af-6db4f71cf92b" />|
note: The buttons are configured using internal pull-up resistors. The ESP32 detects the state of buttons and toggles the on/off states of the respective LEDs.

### Wiring
| Component | Component Pin | ESP32 GPIO Pin | Wire Color |
| :--- | :--- | :--- | :--- |
| **Green LED** | Anode (via Resistor) | **GPIO 27** | Green |
| | Cathode (-) | **GND** | Black |
| **Red LED** | Anode (via Resistor) | **GPIO 12** | Red |
| | Cathode (-) | **GND** | Black |
| **Green Button** | Input Side | **GPIO 32** | Blue |
| | Ground Side | **GND** | Black |
| **Red Button** | Input Side | **GPIO 33** | Yellow |
| | Ground Side | **GND** | Black |
## 02. Obstacle Avoidance Module and Buzzer
### Circuit Diagram
| Wokwi Simulation Diagram 
| :---: |
|<img width="741" height="337" alt="image-removebg-preview (3)" src="https://github.com/user-attachments/assets/9bac1d0e-da2e-4769-9dc8-7e2ac087fe71" />|
note: The obstacle sensor outputs on GPIO32 will always be 0 (obstacle) or 1 (no obstacle). The ESP32 continuously polls the state using "digitalRead(32)". If the state is 0, the code triggers the buzzer by setting GPIO12 to HIGH.
### Wiring
| Component | Component Pin | ESP32 GPIO Pin | Wire Color |
| :--- | :--- | :--- | :--- |
| **Buzzer** | Positive (+) | **GPIO 12** | Green |
| | Negative (-) | **GND** | Black |
| **Obstacle Sensor** | DAT (OUT) | **GPIO 32** | Blue |
| | VCC | **3V3** | Red |
| | GND | **GND** | Black |

### 03. RGB LED Controlled by Potentiometer
### Circuit Diagram
| Wokwi Simulation Diagram 
| :---: |
|<img width="713" height="350" alt="image-removebg-preview (5)" src="https://github.com/user-attachments/assets/07edbba7-d98a-470d-a407-f17fb0a4d266" />|
note: The ESP32 reads analog voltage from potentiometer (0 to 4095) and maps it into 7 steps (0 to 6). A switch case cycles through different color combination(red->yellow->green->cyan->blue->purple->white) based on the knob's position.
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


