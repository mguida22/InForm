/*
 * Sensor Shirt
 * Kylie Dale and Michael Guida
 */
#include "ArduinoJson.h";
#include "Variables.h";
#include "Tolerances.h";

const int backPin = 14;
const int rShoulderPin = 15;
const int rUnderarmPin = 16;
const int lShoulderPin = 17;
const int lUnderarmPin = 18;
const int buttonPin = 0;

int backValue = -1;
int lShoulderValue = -1;
int rShoulderValue = -1;
int lUnderarmValue = -1;
int rUnderarmValue = -1;

//Could potentially take up too much memory
DynamicJsonBuffer jsonBuffer;
bool updated = false;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
  
  while (!Serial){}
  delay(50);
  setVariables();
}

void loop() {
  backValue = analogRead(backPin);
  rShoulderValue = analogRead(rShoulderPin);
  rUnderarmValue = analogRead(rUnderarmPin);
  lShoulderValue = analogRead(lShoulderPin);
  lUnderarmValue = analogRead(lShoulderPin);

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
}

void parseJSON(String content) {
  updated = false;
  JsonObject& in = jsonBuffer.parseObject(const_cast<char*>(content.c_str()));

  if (!in.success()) {
    Serial.println("JSON parsing failed");
    return;
  }

  //Define variables to use to build our JSON
  String type = "out";
  const char* name = in["name"];
  bool leftArm = false;
  bool rightArm = false;
  bool back = false;
  
  //Evaluate
  if (strcmp(in["leftArm"], "fwd45")==0) {
    leftArm = armFwdLeft45();
  } else if (strcmp(in["leftArm"], "fwd90")==0) {
    leftArm = armFwdLeft90();
  } else if (strcmp(in["leftArm"], "fwd135")==0) {
    leftArm = armFwdLeft135();
  } else if (strcmp(in["leftArm"], "fwd180")==0) {
    leftArm = armFwdLeft180();
  } else if (strcmp(in["leftArm"], "side45")==0) {
    leftArm = armSideLeft45();
  } else if (strcmp(in["leftArm"], "side90")==0) {
    leftArm = armSideLeft90();
  } else if (strcmp(in["leftArm"], "side135")==0) {
    leftArm = armSideLeft135();
  } else if (strcmp(in["leftArm"], "side180")==0) {
    leftArm = armSideLeft180();
  } else if (strcmp(in["leftArm"], "atSide")==0) {
    leftArm = armAtSideLeft();
  }

  if (strcmp(in["rightArm"], "fwd45")==0) {
    rightArm = armFwdRight45();
  } else if (strcmp(in["rightArm"], "fwd90")==0) {
    rightArm = armFwdRight90();
  } else if (strcmp(in["rightArm"], "fwd135")==0) {
    rightArm = armFwdRight135();
  } else if (strcmp(in["rightArm"], "fwd180")==0) {
    rightArm = armFwdRight180();
  } else if (strcmp(in["rightArm"], "side45")==0) {
    rightArm = armSideRight45();
  } else if (strcmp(in["rightArm"], "side90")==0) {
    rightArm = armSideRight90();
  } else if (strcmp(in["rightArm"], "side135")==0) {
    rightArm = armSideRight135();
  } else if (strcmp(in["rightArm"], "side180")==0) {
    rightArm = armSideRight180();
  } else if (strcmp(in["rightArm"], "atSide")==0) {
    rightArm = armAtSideRight();
  }

  if (strcmp(in["back"], "straight")==0) {
    back = backStraight();
  } else if (strcmp(in["back"], "fwd")==0) {
    back = backBentFwd();
  } else if (strcmp(in["back"], "back")==0) {
    back = backBentBack();
  }

  //build JSON string
  String jsonString = "{\"type\":\"";
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

  //Print JSON to Serial
  Serial.println(jsonString);
}
