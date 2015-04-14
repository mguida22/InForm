/*
 * Process.js 
 * Kylie Dale and Michael Guida
 */

// when you get a serialdata event, do this:
socket.on('serialEvent', function (data) {
	// Parse JSON and display name
	data = JSON.parse(data);
	displayData(data);
});

//Displays status to user
function displayData(data) {
	data.rightArm = 1;
	if (data.leftArm == 0) {
		leftArmDisp.innerHTML = 'Incorrect Position';
		document.getElementById("leftArmDisp").className = "label label-danger";
	} else {
		leftArmDisp.innerHTML = 'Correct Position';
		document.getElementById("leftArmDisp").className = "label label-success";
	}

	if (data.rightArm == 0) {
		rightArmDisp.innerHTML = 'Incorrect Position';
		document.getElementById("rightArmDisp").className = "label label-danger";
	} else {
		rightArmDisp.innerHTML = 'Correct Position';
		document.getElementById("rightArmDisp").className = "label label-success";
	}

	if (data.back == 0) {
		backDisp.innerHTML = 'Incorrect Position';
		document.getElementById("backDisp").className = "label label-danger";
	} else {
		backDisp.innerHTML = 'Correct Position';
		document.getElementById("backDisp").className = "label label-success";
	}
}


//Builds JSON object from selected pose
function runPose() {
	var currentPose = $('input[name="currentPose"]:checked').val();
	//console.log(currentPose);

	//builds current pose's JSON
	if (currentPose == 'plank') {
		pose = {
			'type': 'in',
			'name': 'plank',
			'leftArm': 'fwd90',
			'rightArm': 'fwd90',
			'back': 'straight'
		};
	} else if (currentPose == 'mountainPose') {
		pose = {
			'type': 'in',
			'name': 'mountainPose',
			'leftArm': 'fwd180',
			'rightArm': 'fwd180',
			'back': 'straight'
		};
	} else if (currentPose == 'downwardDog') {
		pose = {
			'type': 'in',
			'name': 'downwardDog',
			'leftArm': 'fwd180',
			'rightArm': 'fwd180',
			'back': 'straight'
		};
	} else if (currentPose == 'warrior') {
		pose = {
			'type': 'in',
			'name': 'warrior',
			'leftArm': 'side90',
			'rightArm': 'side90',
			'back': 'straight'
		};
	}

	console.log('outgoing' + pose);

	//send pose data to server
	socket.emit('data', pose);
}