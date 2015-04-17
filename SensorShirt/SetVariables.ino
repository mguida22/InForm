/*
 * SetVariables
 * Kylie Dale and Michael Guida
 */

int * computeAvg(){
  int i = 100;
  int backSum = 0;
  int rShoulderSum = 0;
  int lShoulderSum = 0;
  int rUnderarmSum = 0;
  int lUnderarmSum = 0;
  
  while (i > 0){
    if (i % 20 == 0) {
      Serial.println(i / 20);
    }
    
    backSum += analogRead(backPin);
    rShoulderSum += analogRead(rShoulderPin);
    rUnderarmSum += analogRead(rUnderarmPin);
    
    i--;
    delay(50);
  }
  
  int ret[6] = {backSum/100, rShoulderSum/100, rUnderarmSum/100, backSum/100, lShoulderSum/100, lUnderarmSum/100};
  return ret;
}

void setVariables(){
  
  //setup
  int *avgs;
  
  // -------- Arms at side --------
  Serial.println("Put your arms at your side \nPress button when ready");
  
  //wait for button press
  while(digitalRead(buttonPin) != 1){}
  delay(1000);
  
  avgs = computeAvg();
  
  armSRBackVal = avgs[0];
  armSRShoulderVal = avgs[1];
  armSRUnderVal = avgs[2];

  armSLBackVal = avgs[3];
  armSLShoulderVal = avgs[4];
  armSLUnderVal = avgs[5];
  
  delay(250);
  
  // -------- Arms at side 45 degrees --------
  Serial.println("Put your arms 45 degrees to your side \nPress button when ready");
  
  //wait for button press
  while(digitalRead(buttonPin) != 1){}
  delay(1000);
  
  avgs = computeAvg();
  
  armSR45BackVal = avgs[0];
  armSR45ShoulderVal = avgs[1];
  armSR45UnderVal = avgs[2];

  armSL45BackVal = avgs[3];
  armSL45ShoulderVal = avgs[4];
  armSL45UnderVal = avgs[5];

  delay(250);
  
  // -------- Arms at side 90 degrees --------
  Serial.println("Put your arms 90 degrees to your side \nPress button when ready");
  
  //wait for button press
  while(digitalRead(buttonPin) != 1){}
  delay(1000);
  
  avgs = computeAvg();
  
  armSR90BackVal = avgs[0];
  armSR90ShoulderVal = avgs[1];
  armSR90UnderVal = avgs[2];
  
  armSL90BackVal = avgs[3];
  armSL90ShoulderVal = avgs[4];
  armSL90UnderVal = avgs[5];

  delay(250);
  
  // -------- Arms at side 135 degrees --------
  Serial.println("Put your arms 135 degrees to your side \nPress button when ready");
  
  //wait for button press
  while(digitalRead(buttonPin) != 1){}
  delay(1000);
  
  avgs = computeAvg();
  
  armSR135BackVal = avgs[0];
  armSR135ShoulderVal = avgs[1];
  armSR135UnderVal = avgs[2];
  
  armSL135BackVal = avgs[3];
  armSL135ShoulderVal = avgs[4];
  armSL135UnderVal = avgs[5];

  delay(250);
  
  // -------- Arms at side 180 degrees --------
  Serial.println("Put your arms 180 degrees to your side \nPress button when ready");
  
  //wait for button press
  while(digitalRead(buttonPin) != 1){}
  delay(1000);
  
  avgs = computeAvg();
  
  armSR180BackVal = avgs[0];
  armSR180ShoulderVal = avgs[1];
  armSR180UnderVal = avgs[2];
  
  armSL180BackVal = avgs[3];
  armSL180ShoulderVal = avgs[4];
  armSL180UnderVal = avgs[5];

  // -------- Arms fwd 45 degrees --------
  Serial.println("Put your arms 45 degrees forward \nPress button when ready");
  
  //wait for button press
  while(digitalRead(buttonPin) != 1){}
  delay(1000);
  
  avgs = computeAvg();
  
  armFR45BackVal = avgs[0];
  armFR45ShoulderVal = avgs[1];
  armFR45UnderVal = avgs[2];
  
  armFL45BackVal = avgs[3];
  armFL45ShoulderVal = avgs[4];
  armFL45UnderVal = avgs[5];
  
  delay(250);
  
  // -------- Arms fwd 90 degrees --------
  Serial.println("Put your arms 90 degrees forward \nPress button when ready");
  
  //wait for button press
  while(digitalRead(buttonPin) != 1){}
  delay(1000);
  
  avgs = computeAvg();
  
  armFR90BackVal = avgs[0];
  armFR90ShoulderVal = avgs[1];
  armFR90UnderVal = avgs[2];
  
  armFL90BackVal = avgs[3];
  armFL90ShoulderVal = avgs[4];
  armFL90UnderVal = avgs[5];

  delay(250);
  
  // -------- Arms fwd 135 degrees --------
  Serial.println("Put your arms 135 degrees forward \nPress button when ready");
  
  //wait for button press
  while(digitalRead(buttonPin) != 1){}
  delay(1000);
  
  avgs = computeAvg();
  
  armFR135BackVal = avgs[0];
  armFR135ShoulderVal = avgs[1];
  armFR135UnderVal = avgs[2];
  
  armFL135BackVal = avgs[3];
  armFL135ShoulderVal = avgs[4];
  armFL135UnderVal = avgs[5];
  
  delay(250);

  // -------- Arms fwd 180 degrees --------
  Serial.println("Put your arms 180 degrees forward \nPress button when ready");
  
  //wait for button press
  while(digitalRead(buttonPin) != 1){}
  delay(1000);
  
  avgs = computeAvg();
  
  armFR180BackVal = avgs[0];
  armFR180ShoulderVal = avgs[1];
  armFR180UnderVal = avgs[2];
  
  armFL180BackVal = avgs[3];
  armFL180ShoulderVal = avgs[4];
  armFL180UnderVal = avgs[5];
  
  delay(250);

  // -------- Back straight --------
  Serial.println("Stand as straight as possible \nPress button when ready");
  
  //wait for button press
  while(digitalRead(buttonPin) != 1){}
  delay(1000);
  
  avgs = computeAvg();
  
  backStraightBackVal = avgs[0];

  delay(250);
  
  // -------- Back bent fwd --------
  Serial.println("Bend forward and touch your toes \nPress button when ready");
  
  //wait for button press
  while(digitalRead(buttonPin) != 1){}
  delay(1000);
  
  avgs = computeAvg();
  
  backBentFBackVal = avgs[0];
  
  delay(250);
  
  // -------- Back bent back --------
  Serial.println("Bend backward \nPress button when ready");
  
  //wait for button press
  while(digitalRead(buttonPin) != 1){}
  delay(1000);
  
  avgs = computeAvg();
  
  backBentBBackVal = avgs[0];
  
  delay(250);
}
