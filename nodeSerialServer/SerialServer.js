/*
	serialServer.js
	a node.js app to read serial strings and send them to webSocket clients
	requires:
		* node.js (http://nodejs.org/)
		* express.js (http://expressjs.com/)
		* socket.io (http://socket.io/#how-to-use)
		* serialport.js (https://github.com/voodootikigod/node-serialport)
	based on the core examples for socket.io and serialport.js
	created 21 Aug 2012
	modified 11 Feb 2014
	by Tom Igoe
	Patches and improvements suggested by Steve Klise, Lia Martinez, and Will Jennings
	*/

var serialport = require("serialport"),			// include the serialport library
	SerialPort  = serialport.SerialPort,			// make a local instance of serial
	portName = process.argv[2],					// third word of the command line should be serial port name
	express = require('express'),
	http = require('http'),
	app = express(),
	server = http.createServer(app),
	io = require('socket.io').listen(server);

	app.get('/', function (req, res) {
  		res.sendFile(__dirname + '/index.html');
	});

	server.listen(8080, function(){
		console.log("Express server listening on port " + 8080);
	});
/*
var io = require("socket.io").listen(server)

	io.set('log level', 1);
	
	console.log(io.settings.logger.level);
	*/

// open the serial port using the name entered on the command line:
var myPort = new SerialPort(portName, {
	// look for return and newline at the end of each data packet:
	parser: serialport.parsers.readline("\r\n")
});

//app.use(express.static(__dirname + '/public'));

// listen for new socket.io connections:
io.sockets.on('connection', function (socket) {
	// if there's a socket client, listen for new serial data:
	myPort.on('data', function (data) {
		// for debugging, you should see this in Terminal:
		//console.log(data);
		// send a serial event to the web client with the data:
		socket.emit('serialEvent', data);
	});

	// if the client sends you data, act on it:
	socket.on('data', function(data) {
		console.log('received from client: ' + data);
		myPort.write(data);
	});
});