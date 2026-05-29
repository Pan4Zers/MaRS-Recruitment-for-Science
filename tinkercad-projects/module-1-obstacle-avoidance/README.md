Module 1 Tinkercad Link : https://www.tinkercad.com/things/gu1BkR1vSWp-distance-sensor-warning?sharecode=IMuexQe1RcU70sFCJ4MPvv12IMKCiMI2220SmnKjrGs 

Aim : Create an Earth-based prototype of an object-sensor and elaborate on it's flaws which exxplains why standard sensors will fail in Martian environments.

An ultrasonic sensor (PING sensor) was connected to an Arduino Uno along with an LED. 
An if condition was written that evaluates whether the measured distance is below 100cm. 
When the if condition is TRUE then the warning LED lights up otherwise if FALSE then the LED remains OFF.

Engineering brief: \
Ultrasonic sensors operate by emitting sound waves and measuring the time taken for the echo to return.\
On Mars the atomospheric pressure is approx 0.6% of Earth's - this near vacuum condition means that sound propagate with significantly reduced intensity. \
Ultrasonic sensors become largely non-functional in such conditions. \
IR sensors are rendered useless during dust storms as suspended dust particles scatter and absorb IR wavelengths causing either false readings or signal losses. \
Mars recieves direct solar IR radiation which also cause signal issues to the sensors. \

For realiable navigation during storms we have to implement the following things : \
>LiDAR system for operating in the near-IR spectrum with sufficient pulse energy to penetrate dust. \
>Paired with IMU (Inertial Measurement Unit) that would supplement these sensors by providing dead-reckoning navigation when external sensing is compromised. \
