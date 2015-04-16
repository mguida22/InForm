import serial
import sys

port = "/dev/tty.usbmodem728331"

baudrate = 9600

if len(sys.argv) == 3:
    ser = serial.Serial(sys.argv[1], sys.argv[2])
else:
    print "# Please specify a port and a baudrate"
    print "# using hard coded defaults " + port + " " + str(baudrate)
    ser = serial.Serial(port, baudrate)

f = open('../SensorShirt/Tolerances.h', 'w')
f.write('/*\n * Tolerances.h\n * Kylie Dale and Michael Guida\n */\n')
f.close()

while 1:
	f = open('../SensorShirt/Tolerances.h','a')
	f.write(ser.readline())
	print('writing')
	f.close()