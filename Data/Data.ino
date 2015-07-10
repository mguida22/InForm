/*
 * Tolerances
 * Kylie Dale and Michael Guida
 */
#include "Variables.h";

const int backPin = 16;
const int rShoulderPin = 15;
const int rUnderarmPin = 14;
const int lShoulderPin = 18;
const int lUnderarmPin = 17;
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

  while (!Serial){}
  delay(50);
  setData();

  //replace with wait for button press
  Serial.println("Please run the python script and close the serial monitor");
  Serial.println("Press the button when ready (after closing the monitor)");
  while(digitalRead(buttonPin) != 1){}
  sendTolerances();
  sendValues();
}

void loop() {
}
