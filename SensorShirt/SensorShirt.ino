/*
  Sensor Shirt
  Kylie Dale and Michael Guida
 */
const int backPin = 0;
const int shoulderPin = 1;
const int underarmPin = 2;

int backValue = null;
int shoulderValue = null;
int underarmValue = null;

String pos = "Plank";

void setup() {
  Serial.begin(9600);
}

void loop() {
  backValue = analogRead(backPin);
  shoulderValue = analogRead(shoulderPin);
  underarmValue = analogRead(underarmValue);
  
  println(checkPosition());
  
  delay(300);
}

boolean checkPosition(){
  case(pos) {
    case "Plank":
      if (armFwdRight90() && backStraight()){
        return true;
      } else { return false; }
    default:
      println("Invalid Position");
      break;
  }
}
