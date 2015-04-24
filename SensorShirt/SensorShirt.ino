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
bool updated = false;

//For smoothing of data
bool prevBackData[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
bool prevLeftData[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
bool prevRightData[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

int counter = 0;

int prevBackCount = 0;
int prevLeftCount = 0;
int prevRightCount = 0;


//Setup
void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
}

//Run loop continuously
void loop() {
  String content = "";
  char character;

  while(Serial.available()) {
    character = Serial.read();
    content.concat(character);
    updated = true;
  }

  if (updated) {
    parseJSON(content);
  }
  
  checkPosition();
  delay(500);
}

//Parse json string
void parseJSON(String content) {
  updated = false;
  JsonObject& in = jsonBuffer.parseObject(const_cast<char*>(content.c_str()));
  
  name = in["name"];
  leftArmData = in["leftArm"];
  rightArmData = in["rightArm"];
  backData = in["back"];

  if (!in.success()) {
    Serial.println("JSON parsing failed");
    return;
  }
  oldJSON= "";
  checkPosition();
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

  //add new data to the arrays
  prevBackData[counter] = back;
  prevLeftData[counter] = leftArm;
  prevRightData[counter] = rightArm;

  if (counter < 10){
    counter++;
  } else {
    counter = 0;
  }

  //collect # right
  for (int i = 0; i < 10; i++){
    if (prevBackData[i]){
      prevBackCount++;
    }
    if (prevLeftData[i]){
      prevLeftCount++;
    }
    if (prevRightData[i]){
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



  //build JSON string
  jsonString = "{\"type\":\"";
  jsonString += type;
  jsonString += "\",\"name\":\"";
  jsonString += name;
  jsonString += "\",\"leftArm\":\"";
  
  jsonString += leftArm;
  jsonString += "\",\"rightArm\":\"";
  jsonString += rightArm;
  jsonString += "\",\"back\":\"";
  jsonString += back;
  jsonString += "\"}";

  //Print JSON to Serial if different
  if (oldJSON != jsonString){
    Serial.println(jsonString);
    oldJSON = jsonString;
  }
}
