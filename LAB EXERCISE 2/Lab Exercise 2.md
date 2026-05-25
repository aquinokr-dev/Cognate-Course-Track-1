<img width="750" height="568" alt="{45C3B6F5-6036-4B00-B23F-6791F6F84D44}" src="https://github.com/user-attachments/assets/d5cdb554-f873-4b92-86a2-2fa037060cc1" />

This circuit shows how an Arduino Uno is used to control a seven-segment display using push buttons. The Arduino is connected to the display through digital pins so it can turn specific LED segments ON and OFF to form numbers from 0 to 9. Each segment in the display acts like a small LED, and different combinations of these segments create different digits.

In this project, the push button is used as an increment button. When the button is pressed, the number displayed on the seven-segment increases one by one starting from 0. For example, the display changes from 0 to 1, then 2, 3, 4, until it reaches 9. Once the number reaches 9, the display stops counting even if the increment button is pressed repeatedly. This is because the program is designed to limit the display to a single-digit number only.

Resistors are also included in the circuit to control the current flowing to the LEDs and protect the Arduino and display from damage. This project helps students understand the basics of Arduino programming, digital electronics, input and output control, and how seven-segment displays work. Circuits like this are commonly used in counters, timers, calculators, and digital display systems.
