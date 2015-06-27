/*
 * Sensor Shirt
 * Kylie Dale and Michael Guida
 */
#include "ArduinoJson.h";
#include "Data.h";

//Initialize Pins
const int backPin = 16;
const int rShoulderPin = 15;
const int rUnderarmPin = 14;
const int lShoulderPin = 18;
const int lUnderarmPin = 17;
const int buttonPin = 0;

//Strings of json to update
String jsonString;
String oldJSON;

//Data for json
const char* leftArmData;
const char* rightArmData;
const char* backData;
String type = "out";
const char* name;

//Buffer for json parsing
//Could potentially take up too much memory
DynamicJsonBuffer jsonBuffer;
boolean updated = false;

//For smoothing of data
boolean prevBackData[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
boolean prevLeftData[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
boolean prevRightData[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

int counter = 0;

int prevBackCount = 0;
int prevLeftCount = 0;
int prevRightCount = 0;


//Setup
void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
  rightArmData = "fwd90";
}

//Run loop continuously
void loop() {
  Serial.print(armFwdRight90());
  Serial.print(" | ");
  Serial.print(analogRead(rShoulderPin));
  Serial.print(" | ");
  Serial.print(armFR90ShoulderVal);
  Serial.print(" | ");
  Serial.print(analogRead(rUnderarmPin));
  Serial.print(" | ");
  Serial.print(armFR90UnderVal);
  Serial.print(" | ");

  checkPosition();
  delay(500);
}


//Check if the position from json data is right
void checkPosition() {
  //Define variables to use to build our JSON
  bool leftArm = false;
  bool rightArm = false;
  bool back = false;

  //Evaluate
  //checks left arm data
  if (strcmp(leftArmData, "fwd45")==0) {
    leftArm = armFwdLeft45();
  } else if (strcmp(leftArmData, "fwd90")==0) {
    leftArm = armFwdLeft90();
  } else if (strcmp(leftArmData, "fwd135")==0) {
    leftArm = armFwdLeft135();
  } else if (strcmp(leftArmData, "fwd180")==0) {
    leftArm = armFwdLeft180();
  } else if (strcmp(leftArmData, "side45")==0) {
    leftArm = armSideLeft45();
  } else if (strcmp(leftArmData, "side90")==0) {
    leftArm = armSideLeft90();
  } else if (strcmp(leftArmData, "side135")==0) {
    leftArm = armSideLeft135();
  } else if (strcmp(leftArmData, "side180")==0) {
    leftArm = armSideLeft180();
  } else if (strcmp(leftArmData, "atSide")==0) {
    leftArm = armAtSideLeft();
  }

  //checks right arm data
  if (strcmp(rightArmData, "fwd45")==0) {
    rightArm = armFwdRight45();
  } else if (strcmp(rightArmData, "fwd90")==0) {
    rightArm = armFwdRight90();
  } else if (strcmp(rightArmData, "fwd135")==0) {
    rightArm = armFwdRight135();
  } else if (strcmp(rightArmData, "fwd180")==0) {
    rightArm = armFwdRight180();
  } else if (strcmp(rightArmData, "side45")==0) {
    rightArm = armSideRight45();
  } else if (strcmp(rightArmData, "side90")==0) {
    rightArm = armSideRight90();
  } else if (strcmp(rightArmData, "side135")==0) {
    rightArm = armSideRight135();
  } else if (strcmp(rightArmData, "side180")==0) {
    rightArm = armSideRight180();
  } else if (strcmp(rightArmData, "atSide")==0) {
    rightArm = armAtSideRight();
  }

  //check back data
  if (strcmp(backData, "straight")==0) {
    back = backStraight();
  } else if (strcmp(backData, "fwd")==0) {
    back = backBentFwd();
  } else if (strcmp(backData, "back")==0) {
    back = backBentBack();
  }

  if (counter < 9){
    counter++;
  } else {
    counter = 0;
  }

  Serial.print(rightArm);

  //add new data to the arrays
  prevBackData[counter] = back;
  prevLeftData[counter] = leftArm;
  prevRightData[counter] = rightArm;

  prevBackCount = 0;
  prevLeftCount = 0;
  prevRightCount = 0;

  //collect # right
  for (int i = 0; i < 9; i++){
    if (prevBackData[i] == true){
      prevBackCount++;
    }
    if (prevLeftData[i] == true){
      prevLeftCount++;
    }
    if (prevRightData[i] == true){
      prevRightCount++;
    }
  }

  //smooth data
  //if 50% of previous entries are correct
  if (prevBackCount >= 5){
    back = true;
  } else {
    back = false;
  }

  if (prevLeftCount >= 5){
    leftArm = true;
  } else {
    leftArm = false;
  }

  if (prevRightCount >= 5){
    rightArm = true;
  } else {
    rightArm = false;
  }

  Serial.print(" - ");
  Serial.println(rightArm);
}
