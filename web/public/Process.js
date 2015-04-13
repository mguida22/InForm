/*
 * Process.js 
 * Kylie Dale and Michael Guida
 */

// when you get a serialdata event, do this:
socket.on('serialEvent', function (data) {
	// set the stuff inside the element's HTML tags to
	// whatever the 'value' property of the received data is:
	//console.log(data);
	textDisplay.innerHTML = data;
});

//Builds JSON object from selected pose
function runPose() {
	var currentPose = $('input[name="currentPose"]:checked').val();
	console.log(currentPose);

	//builds current pose's JSON
	if (currentPose == 'plank') {
		pose = {
			'name': 'plank',
			'leftArm': 'fwd90',
			'rightArm': 'fwd90',
			'back': 'straight'
		};
	} else if (currentPose == 'mountainPose') {
		pose = {
			'name': 'mountainPose',
			'leftArm': 'fwd180',
			'rightArm': 'fwd180',
			'back': 'straight'
		};
	} else if (currentPose == 'downwardDog') {
		pose = {
			'name': 'downwardDog',
			'leftArm': 'fwd180',
			'rightArm': 'fwd180',
			'back': 'straight'
		};
	} else if (currentPose == 'warrior') {
		pose = {
			'name': 'warrior',
			'leftArm': 'side90',
			'rightArm': 'side90',
			'back': 'straight'
		};
	}

	console.log(pose);

	//send pose data to server
	socket.emit('data', pose);
}