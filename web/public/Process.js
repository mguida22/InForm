/*
 * Process.js 
 * Kylie Dale and Michael Guida
 */

var poseList = {};
var pose;

// when you get a serialdata event, do this:
socket.on('serialEvent', function (data) {
	// Parse JSON and display name
	data = JSON.parse(data);
	displayData(data);
});

//Displays status to user
function displayData(data) {
	//force correct response from shirt
	data.rightArm = 1;

	if (data.name == 'plank') {
		document.getElementById("feedbackTitle").innerHTML = "Feedback : Plank";
	} else if (data.name == 'mountainPose') {
		document.getElementById("feedbackTitle").innerHTML = "Feedback : Mountain Pose";
	} else if (data.name == 'downwardDog') {
		document.getElementById("feedbackTitle").innerHTML = "Feedback : Downward Dog";
	} else if (data.name == 'warrior') {
		document.getElementById("feedbackTitle").innerHTML = "Feedback : Warrior";
	} else if (poseList[data.name] != undefined) {
		document.getElementById("feedbackTitle").innerHTML = "Feedback : " + data.name;
	}

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

	//builds current pose's JSON
	if (currentPose == 'plank') {
		pose = poseList["plank"];
	} else if (currentPose == 'mountainPose') {
		pose = poseList["mountainPose"];
	} else if (currentPose == 'downwardDog') {
		pose = poseList["downwardDog"];
	} else if (currentPose == 'warrior') {
		pose = poseList["warrior"];
	} else if (poseList[currentPose] != undefined) {
		pose = poseList[currentPose];
	}

	console.log('outgoing');
	console.log(pose);

	//send pose data to server
	socket.emit('data', pose);
}

function buildPose() {
	var name = $("#poseName").val();
	var leftArm = $("#leftArmDirection").val() + $("#leftArmAngle").val();
	var rightArm = $("#rightArmDirection").val() + $("#rightArmAngle").val();
	var backPos = $("#backFunction").val();

	if ($("#leftArmAngle").val() == 0) {
		leftArm = 'atSide';
	}

	if ($("#rightArmAngle").val() == 0) {
		rightArm = 'atSide';
	}

	pose = {
			'type': 'in',
			'name': name,
			'leftArm': leftArm,
			'rightArm': rightArm,
			'back': backPos
		};
	poseList[name] = pose;

	if (poseList[name] != undefined){
		document.getElementById("selectPoseList").innerHTML += 
			"<div class=\"radio\"><label><input type=\"radio\" name=\"currentPose\" value=\""
			+ name + "\">" + name + "</label></div>";

		console.log('added');
	} else {
		console.log('already added');
	}
}

//run all initialization code here
function init() {
	//add JSON for each position
	poseList["plank"] = {
			'type': 'in',
			'name': 'plank',
			'leftArm': 'fwd90',
			'rightArm': 'fwd90',
			'back': 'straight'
		};
	poseList["mountainPose"] = {
			'type': 'in',
			'name': 'mountainPose',
			'leftArm': 'fwd180',
			'rightArm': 'fwd180',
			'back': 'straight'
		};
	poseList["downwardDog"] = {
			'type': 'in',
			'name': 'downwardDog',
			'leftArm': 'fwd180',
			'rightArm': 'fwd180',
			'back': 'straight'
		};
	poseList["warrior"] = {
			'type': 'in',
			'name': 'warrior',
			'leftArm': 'side90',
			'rightArm': 'side90',
			'back': 'straight'
		};
}

//runs this function when all components have been loaded
window.onload = function() {
  init();
};