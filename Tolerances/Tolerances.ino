/*
 * Tolerances
 * Kylie Dale and Michael Guida
 */
 
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

int i = 0;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
  
  //setTolerances();
  
  //replace with wait for button press
  delay(2000);
  sendTolerances();
}

void loop() {
}
