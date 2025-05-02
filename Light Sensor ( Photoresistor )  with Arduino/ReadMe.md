### 💡 Light-Activated LED with Arduino (Photoresistor)

This project uses a photoresistor (LDR) to detect light levels. When it gets dark (light level falls below a threshold), an LED automatically turns on, simulating a basic light-activated system like street lights or motionless alarms.

---

🛠️ Requirements

🔧 Hardware
*  Arduino Uno R3 CH340G ATmega328p Development Board
*  USB cable for programming the board
*  LED
*  220Ω Resistor (for the LED)
*  Photoresistor (LDR)
*  10kΩ Resistor (for LDR voltage divider)
*  Breadboard
*  Jumper wires

💻 Software
*  Arduino IDE: Download from https://www.arduino.cc/en/software
*  Arduino USB drivers (automatically installed with IDE)

🔌 Circuit Diagram
LDR Setup (Voltage Divider):
*  Connect one leg of the LDR to 5V
*  Connect the other leg to:
  1  A0 (analog pin)
  2  And also to GND through a 10kΩ resistor

LED:
*  Connect anode (+) to digital pin 8 through a 220Ω resistor
*  Connect cathode (–) to GND



https://github.com/user-attachments/assets/254264bc-33a3-43ab-b905-f579833c780f

