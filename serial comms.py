import serial
import time
ser= serial.Serial(port='COM3',baudrate=9600,timeout=1)
def writeUSB(x):
    text=bytearray(x,'utf-8')
    ser.write(text)
    time.sleep(1)


while True:
    num = input('Enter value: ')
    if ((num>1180 and num<2000) or (num>2180 and num<3000) or (num >3180 and num < 4000) or (num >4180 and num < 5000) or (num >5180 and num <6000)):
        print("Invalid Entry!")
    else:
        value = writeUSb(num)
