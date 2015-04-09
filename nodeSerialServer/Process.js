/*
 * Process.js 
 * Kylie Dale and Michael Guida
 */

// open a connection to the serial server:
var socket = io.connect('http://localhost:8080');
// when you get a serialdata event, do this:
socket.on('serialEvent', function (data) {
	// set the stuff inside the element's HTML tags to
	// whatever the 'value' property of the received data is:
	textDisplay.innerHTML = data;
});