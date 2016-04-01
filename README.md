# Motion-Detection-using-Arduino
This project basically senses motion in front of a motion sensor. It uses a PIR sensor for motion detection and Arduino Uno as the Microcontroller.

Components required:
1. Arduino UNO
2. Jumper wires
3. PIR sensor
4. LED (just as an indicator to check if there is motion or not)
5. Breadboard

Once all the connections are made and the code is burnt to the microcontroller, supply power to it. The PIR sensor takes some time to get used to the surroundings. So a time delay of 30 seconds is given. This stabilizes the sensor. 

After stabilization phase is done, move your hand infront of the sensor. If the PIR sensor detects motion, it will send a High value to the microcontroller. And if the code works correctly, the LED should be lit. Again, if you move your hand infront of the sensor, High Value is sent to the microcontroller and the LED turns off. 

This project could be further enhanced by using Relay and connecting a tube light or a fan to it.
