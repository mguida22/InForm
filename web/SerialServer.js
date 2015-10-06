/*
 * SerialServer.js
 * Kylie Dale and Michael Guida
 *
 * to run: node SerialServer.js /dev/tty.usbmodem728331 (update to your port)
 */

var serialport = require("serialport"),
		express    = require('express'),
		http       = require('http'),
		SerialPort = serialport.SerialPort,
		portName   = process.argv[2],
		app        = express(),
		server     = http.createServer(app),
		io         = require('socket.io').listen(server),
		connected  = false;

app.get('/', function (req, res) {
	res.sendFile(__dirname + '/public/index.html');
});

app.use(express.static(__dirname, 'public'));

server.listen(8080, function(){
	console.log("Express server listening on port " + 8080);
});

// listen for new socket.io connections:
io.sockets.on('connection', function (socket) {
	// notify when connected
	console.log('socket.io connected');
	connected = true;

	// open the serial port using the name entered on the command line:
	var myPort = new SerialPort(portName, {
		// look for return and newline at the end of each data packet:
		parser: serialport.parsers.readline("\r\n")
	});

	console.log('serial port connected');

	// if there's a socket client, listen for new serial data:
	myPort.on('data', function (data) {
		// send a serial event to the web client with the data:
		socket.emit('serialEvent', data);
	});

	// notify when disconnected
	socket.on('disconnect', function() {
		console.log('socket.io disconnected');
		connected = false;
		myPort.close(function (err) {
		    console.log('serial port disconnected');
				console.error(err);
		});
	});

	// if the client sends you data, act on it:
	socket.on('data', function(data) {
		data = JSON.stringify(data);
		myPort.write(data);
	});
});
