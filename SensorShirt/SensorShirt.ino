/*
 * Sensor Shirt
 * Kylie Dale and Michael Guida
 */
#include "ArduinoJson.h";
 
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
  lShoulderValue = analogRead(lShoulderValue);
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
  JsonObject& root = jsonBuffer.parseObject(const_cast<char*>(content.c_str()));
  
  if (!root.success()) {
    Serial.println("parseObject() failed");
    return;
  } else {
    Serial.println("parseObject() succeeded");
  }
  content = "";
}
