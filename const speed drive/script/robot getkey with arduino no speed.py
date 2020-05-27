import serial
from getkey import getkey , keys
ser = serial.Serial('/dev/ttyACM0', baudrate = 9600, timeout = 1)

def getvalues ():
    ser.write(b'g')
    arduinodata = ser.readline()
    return arduinodata[0]

while (1):
    key = getkey()

    if key == '2':
        ser.write(b"1")
        print('robot is moving forward')
    elif key == '8':
        ser.write(b"2")
        print('robot is moving backward')
    elif key == '6':
        ser.write(b"5")
        print('robot turn right')
    elif key == '4':
        ser.write(b"4")
        print('robot turn left')
    elif key == '5':
        ser.write(b"3")
        print('stop')    
    elif key == '1':
        ser.write(b"6")
        print("robot is moving forward 45 right")
    elif key == '3':
        ser.write(b"7")
        print("robot is moving forward 45 left")
    elif key == '7':
        ser.write(b"8")
        print("robot is moving backward 45 right")
    elif key == '9':
        ser.write(b"9")
        print("robot is moving backward 45 left")
    else:
        print("unkown key") 

