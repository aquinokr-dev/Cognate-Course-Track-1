<img width="939" height="469" alt="{32BD9D31-F2F3-4A22-92E4-DC266375642A}" src="https://github.com/user-attachments/assets/bc8ce43a-6aaa-4653-b18e-bb6e04fbe6de" />


This circuit shows an Arduino Uno connected to multiple LEDs through current-limiting resistors. Each LED is connected to one of the Arduino’s digital output pins, while the other side of all LEDs is tied together to the Arduino ground (GND).

How the circuit works
The Arduino sends HIGH or LOW signals from its digital pins.
When a pin outputs HIGH (5 V), current flows through:
the resistor,
the LED,
and then to ground.
This causes the LED to light up.
When the pin is LOW, no current flows and the LED turns off.
Role of the resistors

The resistors are very important because they limit the current flowing through the LEDs. Without them, too much current could damage both the LEDs and the Arduino pins. Typical resistor values are between 220 Ω and 330 Ω.

Purpose of the breadboard

The breadboard is mainly used to organize connections and simplify wiring without soldering. In this diagram, it appears mostly unused except for providing a common ground connection.

Applications

This type of circuit is commonly used for:

LED chaser or running-light projects
Traffic light simulations
Learning digital outputs in Arduino programming
Basic display and signaling systems

The setup demonstrates how a microcontroller can independently control several LEDs using programmed digital signals.
