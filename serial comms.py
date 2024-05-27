import serial
import time
ser= serial.Serial(port='COM3',baudrate=9600,timeout=1)
def writeLmao(x):
    text=bytearray(x,'utf-8')
    ser.write(text)
    time.sleep(1)


while True:
    num = input('Enter a number: ')
    value = writeLmao(num)