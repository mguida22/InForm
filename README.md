# Sensor Shirt
A shirt that helps you learn yoga by giving live feedback on your body position compared to the correct form. 

## Setup

The Teensy 3.1 was used as the microcontroller for the sensor shirt. To run this just like an Arduino board, you will need to download the Teensyduino software on your computer, which can be downloaded from https://www.pjrc.com/teensy/td_download.html. 

From there you can start Arduino and select the correct board you are using. For the first time run, you will have to "Verify" the code and then press the button on the Teensy when prompted to program the code. 

<!-- TODO: create package.json file for all required node libraries -->
There are also some libraries and packages required to run the sensor shirt. First you will need to have Node.js installed on your computer, which you can download from http://nodejs.org.

After installing node, or if you already have it, in your command line run each of the following commands to install all required packages.

```
$ npm express
$ npm socket.io
$ npm serialport
```

## Using Position Functions
The position functions can be used to build up complete positions.

For example to assert if the users right arm is raised at 90 degrees forward: 
```C
armFwdRight90();
```
This will return a boolean value of true or false based off of the users position.

We can use these simple position functions to build a more complex position such as the plank:
```C
boolean plank() {
  if (armFwdRight90() && armFwdLeft90() && backStraight()) {
    return true;
  } else {
    return false;
  }
}
```

## Function Calls

### General Functions
Function Call     | Return Type | Description
----------------- | ----------- | -----------
setVariables()    | void        | Runs the calibration process for the shirt and sets all position variables
computeAvg()      | int*        | Takes 100 readings over 5 seconds of all values from the shirt and averages them

### Position Functions
Function Call     | Return Type | Description
----------------- | ----------- | -----------
armAtSideRight()  | boolean     | asserts if the user's right arm is at their side
armSideRight45()  | boolean     | asserts if the user's right arm is raised 45 degrees to their side
armSideRight90()  | boolean     | asserts if the user's right arm is raised 90 degrees to their side
armSideRight135() | boolean     | asserts if the user's right arm is raised 135 degrees to their side
armSideRight180() | boolean     | asserts if the user's right arm is raised 180 degrees to their side
armFwdRight45()   | boolean     | asserts if the user's right arm is raised 45 degrees forward
armFwdRight90()   | boolean     | asserts if the user's right arm is raised 90 degrees forward
armFwdRight135()  | boolean     | asserts if the user's right arm is raised 135 degrees forward
armFwdRight180()  | boolean     | asserts if the user's right arm is raised 180 degrees forward
armAtSideLeft()   | boolean     | asserts if the user's left arm is at their side
armSideLeft45()   | boolean     | asserts if the user's left arm is raised 45 degrees to their side
armSideLeft90()   | boolean     | asserts if the user's left arm is raised 90 degrees to their side
armSideLeft135()  | boolean     | asserts if the user's left arm is raised 135 degrees to their side
armSideLeft180()  | boolean     | asserts if the user's left arm is raised 180 degrees to their side
armFwdLeft45()    | boolean     | asserts if the user's left arm is raised 45 degrees forward
armFwdLeft90()    | boolean     | asserts if the user's left arm is raised 90 degrees forward
armFwdLeft135()   | boolean     | asserts if the user's left arm is raised 135 degrees forward
armFwdLeft180()   | boolean     | asserts if the user's left arm is raised 180 degrees forward
backStraight()    | boolean     | asserts if the user's back is straight
backBentBack()    | boolean     | asserts if the user's back is bent backward
backBentFwd()     | boolean     | asserts if the user's back is bent forward
