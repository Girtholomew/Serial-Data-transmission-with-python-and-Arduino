#include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;
String inString = ""; 
void setup()
{
  servo1.attach(11);
  servo2.attach(10);
  servo3.attach(9);
  servo4.attach(6);
  servo5.attach(5);
  servo6.attach(3);
  Serial.begin(9600);
}

void loop()
{
 if (Serial.available()) 
    {
      String inString=Serial.readString();
      int x= inString.toInt();
      int servonum=x/1000;
      int angle=x%1000;
      switch (servonum){
        case 1:
        servo1.write(angle);
        Serial.print(angle);
        Serial.println(" written to servo 1");
        break;
        case 2:
          servo2.write(angle);
          Serial.print(angle);
          Serial.println(" written to servo 2");
        break;
        case 3:
         servo3.write(angle);
         Serial.print(angle);
        Serial.println(" written to servo 3");
        break;
        case 4:
         servo4.write(angle);
         Serial.print(angle);
        Serial.println(" written to servo 4");
        break;
        case 5:
         servo5.write(angle);
         Serial.print(angle);
        Serial.println(" written to servo 5");
        break;
        case 6:
         servo6.write(angle);
         Serial.print(angle);
        Serial.println(" written to servo 6");
        break;
      }
      inString = "";
    }
}