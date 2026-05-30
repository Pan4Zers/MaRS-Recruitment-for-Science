Module 3 Tinkercad Link : https://www.tinkercad.com/things/c21vD4Sp4XW-temperaturesensortmp36?sharecode=dSKJyEBqZbmHGICr0EBAV5L0sb82blsVsU-U6I55AN4

Aim : To create a simple temperature sensor and explain the flaws behind standard commercial equipment in Martian frigid environments

Working Methodology : \
A TMP 36 temperature sensor is connected to the analog pin of an Arduino board. \
The sensor outputs a voltage proportional to surrounding temperature. \
The Arduino converts this voltage to a raw integer value between 0 - 1023. \
This raw value is first converted to voltage using the relation mentioned in the code. \
V = raw_value * (5.0 / 1023) \
The Arduino's ADC maps from 0-5V which is split into 1024 steps corresponding to a increase in voltage. \
Temperature in degrees C is then derived using the relation: \
T = (V - 0.5) * 100 \
At 0 degrees C the voltage is 0.5V thereby creating an offset. \
The factor of hundred represents the 0.01 increasae in voltage per degree celcius.\
Serial.begin with baud rate of 9600 initializes the communication channel and Serial.print() transmits the values to the Serial Monitor. 

Engineering Brief : 
During dust storms, power management becomes the most critical survival function. \
The rover will operate on a hierarchical system for power : \
At the highest tier, the heaters make sure the battery remains above -20 Celcius to recieve uninterrupted power from the main battery bank. \
At the second tier we have reduced power supplied to onboard computers and communication systems. \
Non - essential systems include science instruments, cameras and mobility actuatoers that are powered down until the solar panels recieve full radiance. \
Sensors are distributed all across the rover's electronics that feed the software responsible for errors in real time. \
For any circumstance, the system activates corresponding heater circuits in specific zones. \
This zone based heater system directs power where it is needed rather than providing heat uniformly throughout the system, thereby conserving the limited battery during storms and extreme weather conditions.\
>Radioisotope Heater Units (RHUs) provide passive baseline warmth that is independent of battery states ensuring that the thermal limits are maintained even in power failure scenarios.
