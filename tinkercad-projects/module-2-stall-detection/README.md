Module 2 Tinkercad Link : https://www.tinkercad.com/things/anXkTKgmv8x-motor-push-button-led?sharecode=vsuA_zhPcvgg728jG2pw457X8QoYqpjAXlJ9LHlZPiI

Aim : To create a protective system for power to be disconnected upon detection of mechanical resitance on wheels toaavoid excess power outage 
       in the form of a LED-pushbutton circuit that activates when the motors are in danger. 

A pushbutton and an LED were connected to an Arduino Uno. \
The pushbutton simulates a mechanical limit switch or stall trigger mounted on the wheel suspension. \
The code uses a digitalRead() function to continuously poll the button pin state. \
An if-else statement evaluates the pin, if the button is pressed giving HIGH signakl, the motor shut-off LED activates, if it is not pressed giving the LOW, the LED remains off. \
This logic simulates an immediate power cut response to a detected stall event.

Engineering Brief : \
In real rovers the motor stall detection depends on real time sensing. \
When the drive motor suddenly experiences a sharp increase in power draw as it attempts to overcome the mechanical resistence. \
A current sensing resistor placed in series with each motor driver continuously monitors this current. When the measured value exceeds a predefined threshold typically 150-200% of normal operating current which will cause the onboard microcontroller immediately cuts power to the affected motor driver via a logic signal. \
>To prevent motor driver burnout, MOSFETs with built-in overcurrent protection would be selected as switching elements, supplemented by polyfuses which are resettable fuses that open the circuit during sustained overcurrent events and reset once the fault clears. A software-level watchdog loop running at high frequency monitors current values and can cut power within microseconds of detecting a spike, well before thermal damage occurs in the driver IC.
