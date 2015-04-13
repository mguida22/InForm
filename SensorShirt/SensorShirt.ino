/*
 * Sensor Shirt
 * Kylie Dale and Michael Guida
 */
#include "ArduinoJson.h";
#include "Variables.h";
 
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
DynamicJsonBuffer jsonOutBuffer;
boolean updated = false;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
}

void testing() {
  int i = 0;
  for (i=0; i<1000; i++){
    Serial.println(i);
    delay(300);
  }
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
  Serial.println(content);
  JsonObject& in = jsonBuffer.parseObject(const_cast<char*>(content.c_str()));
  
  if (!in.success()) {
    //Serial.println("parseObject() failed");
    return;
  }
  //Serial.println("parseObject() succeeded");
  
  //Build JSON to return
  JsonObject& out = jsonBuffer.createObject();
  out["name"] = in["name"];
  //Evaluate
  if (strcmp(in["leftArm"], "fwd45")==0) {
    out["leftArm"] = armFwdLeft45();
  } else if (strcmp(in["leftArm"], "fwd90")==0) {
    out["leftArm"] = armFwdLeft90();
  } else if (strcmp(in["leftArm"], "fwd135")==0) {
    out["leftArm"] = armFwdLeft135();
  } else if (strcmp(in["leftArm"], "fwd180")==0) {
    out["leftArm"] = armFwdLeft180();
  } else if (strcmp(in["leftArm"], "side45")==0) {
    out["leftArm"] = armSideLeft45();
  } else if (strcmp(in["leftArm"], "side90")==0) {
    out["leftArm"] = armSideLeft90();
  } else if (strcmp(in["leftArm"], "side135")==0) {
    out["leftArm"] = armSideLeft135();
  } else if (strcmp(in["leftArm"], "side180")==0) {
    out["leftArm"] = armSideLeft180();
  } else if (strcmp(in["leftArm"], "atSide")==0) {
    out["leftArm"] = armAtSideLeft();
  }
  
  if (strcmp(in["leftArm"], "fwd45")==0) {
    out["rightArm"] = armFwdRight45();
  } else if (strcmp(in["rightArm"], "fwd90")==0) {
    out["rightArm"] = armFwdRight90();
  } else if (strcmp(in["rightArm"], "fwd135")==0) {
    out["rightArm"] = armFwdRight135();
  } else if (strcmp(in["rightArm"], "fwd180")==0) {
    out["rightArm"] = armFwdRight180();
  } else if (strcmp(in["rightArm"], "side45")==0) {
    out["rightArm"] = armSideRight45();
  } else if (strcmp(in["rightArm"], "side90")==0) {
    out["rightArm"] = armSideRight90();
  } else if (strcmp(in["rightArm"], "side135")==0) {
    out["rightArm"] = armSideRight135();
  } else if (strcmp(in["rightArm"], "side180")==0) {
    out["rightArm"] = armSideRight180();
  } else if (strcmp(in["rightArm"], "atSide")==0) {
    out["rightArm"] = armAtSideRight();
  }
  
  if (strcmp(in["back"], "straight")==0) {
    out["back"] = backStraight();
  } else if (strcmp(in["back"], "fwd")==0) {
    out["back"] = backBentFwd();
  } else if (strcmp(in["back"], "back")==0) {
    out["back"] = backBentBack();
  }
  
  out.printTo(Serial);

}
