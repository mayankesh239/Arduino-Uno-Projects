### 📘 PWM LED Brightness Control using Arduino

🔧 Description
This is a simple project demonstrating Pulse Width Modulation (PWM) using an Arduino Uno, an LED, and a resistor on a breadboard. The LED's brightness is controlled by varying the duty cycle of the PWM signal.

---

🛠️ Requirements

🔧 Hardware
*  Arduino Uno R3 CH340G ATmega328p Development Board
*  USB cable for programming the board
*  LED
*  220Ω Resistor (for the LED)
*  10kΩ Resistor (for LDR voltage divider)
*  Breadboard
*  Jumper wires

💻 Software
*  Arduino IDE: Download from https://www.arduino.cc/en/software
*  Arduino USB drivers (automatically installed with IDE)

🧠 How It Works

PWM is used to simulate analog voltage using digital signals.
The analogWrite() function sends a square wave with variable duty cycle.
A higher duty cycle = brighter LED; lower = dimmer LED.
The LED fades in and out smoothly using a for-loop.



https://github.com/user-attachments/assets/6d798d9d-ee69-48fc-a217-e2eb2dafac3d

