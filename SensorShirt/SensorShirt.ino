/*
 * Sensor Shirt
 * Kylie Dale and Michael Guida
 */
#include "ArduinoJson.h";
#include "Data.h";

const int backPin = 16;
const int rShoulderPin = 15;
const int rUnderarmPin = 14;
const int lShoulderPin = 18;
const int lUnderarmPin = 17;
const int buttonPin = 0;
/*
int backValue = -1;
int lShoulderValue = -1;
int rShoulderValue = -1;
int lUnderarmValue = -1;
int rUnderarmValue = -1;
*/
String jsonString;
String oldJSON;

const char* leftArmData;
const char* rightArmData;
const char* backData;
String type = "out";
const char* name;

//Could potentially take up too much memory
DynamicJsonBuffer jsonBuffer;
bool updated = false;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
}

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

void checkPosition() {
  //Define variables to use to build our JSON
  bool leftArm = false;
  bool rightArm = false;
  bool back = false;
  
  //Evaluate
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

  if (strcmp(backData, "straight")==0) {
    back = backStraight();
  } else if (strcmp(backData, "fwd")==0) {
    back = backBentFwd();
  } else if (strcmp(backData, "back")==0) {
    back = backBentBack();
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
