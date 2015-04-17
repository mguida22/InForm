import serial
import sys

port = "/dev/tty.usbmodem728331" # Default Port - replace with yours
baudrate = 9600 # Default baud rate - probably no need to change

if len(sys.argv) == 3:
	# if user specified port and baudrate, use it
    ser = serial.Serial(sys.argv[1], sys.argv[2])
else:
	# if no port and baud rate specified use defaults
    print "# No port and a baudrate specified"
    print "# using hard coded defaults " + port + " " + str(baudrate)
    ser = serial.Serial(port, baudrate)

# Clear files old contents and header comments
f = open('../SensorShirt/Tolerances.h', 'w')
f.write('/*\n * Tolerances.h\n * Kylie Dale and Michael Guida\n */\n\n')
f.close()

while 1:
	# Append any data from the serial port to the Tolerances.h file
	f = open('../SensorShirt/Tolerances.h','a')
	f.write(ser.readline())
	print('...')
	f.close()