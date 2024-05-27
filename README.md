# Serial-Data-transmission-with-python-and-Arduino

This repository explains the working of the code that I made to communicate with an Arduino using Python, which is used to drive upto 6 servo motors at once.

# Requirements
[pySerial\n](https://github.com/pyserial/pyserial/blob/master/documentation/pyserial.rst)
[Python Time Library](https://docs.python.org/3/library/time.html)

# Python Code
The code accepts values between `1000` and `6180`.
Once the user inputs a value in the given range, the code sends the input value to the Arduino.
Why the data input range is between `1000` and `6180` is that the value at the thousand's position indicates which servo motor to control. And the rest of the number indicates the angle to which the selected servo should turn to. For example, let's say you want to turn the 4th servo to an angle of 120 degrees. The data that needs to be passed to the code would be `4120`. 

# Arduino Code
The code receives the value sent by the python code. This value is then split into two. the value at the thousand's position is extracted and stored into a variable `servonum`. Every value other than the one at the thousand's position is extracted and stored into a separate variable `angle`. The value stored in `servonum` is used as input for a switch case, and inside the switch case the value stored in `angle` is used to rotate the respective servo to the desired angle. 

# Upcoming Changes
The code will be made so that it can be used as a function.

