import serial
import sys

# Default port and baudrate
port = "/dev/tty.usbmodem728331"
baudrate = 9600

if len(sys.argv) == 2:
	# if user specified port use it and the default baudrate
    print "# No baudrate specified"
    print "# using " + sys.argv[1] + " " + baudrate
    ser = serial.Serial(sys.argv[1], baudrate)
elif len(sys.argv) == 3:
    # if user specified port and baudrate, use them both
    print "# using " + sys.argv[1] + " " + sys.argv[2]
    ser = serial.Serial(sys.argv[1], sys.argv[2])
else:
    # if no port and baud rate specified use defaults
    print "# No port and a baudrate specified"
    print "# using hard coded defaults " + port + " " + str(baudrate)
    ser = serial.Serial(port, baudrate)

# Clear files old contents
f = open('../SensorShirt/Data.h', 'w')
# Add header comments
f.write('/*\n * Data.h\n * Kylie Dale and Michael Guida\n */\n\n')
f.close()

while 1:
    # Append any data from the serial port to the Data.h file
    f = open('../SensorShirt/Data.h','a')
    f.write(ser.readline())
    print('...')
    f.close()
