# ESP32 Starter Kit
I bought this ESP32 basic starter kit from AliExpress and tried everything inside.

<img width="2310" height="967" alt="IMG_20260702_202538_edit_575180134320565" src="https://github.com/user-attachments/assets/330c7456-66ce-46e0-b79d-14542053bdb4" />

## 01. leds and buttons
### Circuit Diagram
| Wokwi Simulation Diagram 
| :---: |
|<img width="652" height="383" alt="image-removebg-preview (4)" src="https://github.com/user-attachments/assets/93fee753-47ee-499b-87af-6db4f71cf92b" />|

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
## 02. obstacle avoidance module and buzzer
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
