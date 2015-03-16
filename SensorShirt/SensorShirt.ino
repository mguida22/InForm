/*
 * Sensor Shirt
 * Kylie Dale and Michael Guida
 */
 
const int backPin = 0;
const int shoulderPin = 1;
const int underarmPin = 2;

int backValue = -1;
int lShoulderValue = -1;
int rShoulderValue = -1;
int lUnderarmValue = -1;
int rUnderarmValue = -1;

int pos = 'Plank';

void setup() {
  Serial.begin(9600);
  while(!Serial) {} // wait for serial port to connect
  setVariables(); 
}

void loop() {
  backValue = analogRead(backPin);
  rShoulderValue = analogRead(shoulderPin);
  rUnderarmValue = analogRead(underarmPin);
  
  //println(checkPosition());
  
  delay(300);
}
/*
boolean checkPosition(){
  switch(pos) {
    case 'Plank':
      if (armFwdRight90() && backStraight()){
        return true;
      } else { return false; }
    default:
      Serial.println("Invalid Position");
      break;
  }
}
*/
