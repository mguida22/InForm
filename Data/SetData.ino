/*
 * SetTolerances
 * Kylie Dale and Michael Guida
 */
const int EXTRATOL = 0;

void computeTol(int *tols, int *avgs) {
  int i = 100;
  int val = 0;

  int backLow = 1024;
  int rShoulderLow = 1024;
  int lShoulderLow = 1024;
  int rUnderarmLow = 1024;
  int lUnderarmLow = 1024;

  int backHigh = 0;
  int rShoulderHigh = 0;
  int lShoulderHigh = 0;
  int rUnderarmHigh = 0;
  int lUnderarmHigh = 0;
  
  int backSum = 0;
  int rShoulderSum = 0;
  int lShoulderSum = 0;
  int rUnderarmSum = 0;
  int lUnderarmSum = 0;

  while (i > 0) {
    if (i % 20 == 0) {
      Serial.println(i / 20);
    }
  
    val = analogRead(backPin);
    if (val < backLow) {
      backLow = val;
    } else if (val > backHigh) {
      backHigh = val;
    }

    val = analogRead(rShoulderPin);
    if (val < rShoulderLow) {
      rShoulderLow = val;
    } else if (val > rShoulderHigh) {
      rShoulderHigh = val;
    }

    val = analogRead(lShoulderPin);
    if (val < lShoulderLow) {
      lShoulderLow = val;
    } else if (val > lShoulderHigh) {
      lShoulderHigh = val;
    }

    val = analogRead(rUnderarmPin);
    if (val < rUnderarmLow) {
      rUnderarmLow = val;
    } else if (val > rUnderarmHigh) {
      rUnderarmHigh = val;
    }

    val = analogRead(lUnderarmPin);
    if (val < lUnderarmLow) {
      lUnderarmLow = val;
    } else if (val > lUnderarmHigh) {
      lUnderarmHigh = val;
    }
    
    backSum += analogRead(backPin);
    rShoulderSum += analogRead(rShoulderPin);
    rUnderarmSum += analogRead(rUnderarmPin);
    lShoulderSum += analogRead(lShoulderPin);
    lUnderarmSum += analogRead(lUnderarmPin);

    i--;
    delay(50);
  }

  tols[0] = backHigh - backLow + EXTRATOL;
  tols[1] = rShoulderHigh - rShoulderLow + EXTRATOL;
  tols[2] = lShoulderHigh - lShoulderLow + EXTRATOL;
  tols[3] = backHigh - backLow + EXTRATOL;
  tols[4] = rUnderarmHigh - rUnderarmLow + EXTRATOL;
  tols[5] = lUnderarmHigh - lUnderarmLow + EXTRATOL;
  
  avgs[0] = backSum/100;
  avgs[1] = rShoulderSum/100;
  avgs[2] = rUnderarmSum/100;
  avgs[3] = backSum/100;
  avgs[4] = lShoulderSum/100;
  avgs[5] = lUnderarmSum/100;
  
/*
  Serial.print("back: ");
  Serial.print(backHigh);
  Serial.print(", ");
  Serial.println(backLow);
  
  Serial.print("rShoulder: ");
  Serial.print(rShoulderHigh);
  Serial.print(", ");
  Serial.println(rShoulderLow);
  
  Serial.print("lShoulder: ");
  Serial.print(lShoulderHigh);
  Serial.print(", ");
  Serial.println(lShoulderLow);
  
  Serial.print("rUnderarm: ");
  Serial.print(rUnderarmHigh);
  Serial.print(", ");
  Serial.println(rUnderarmLow);
  
  Serial.print("lUnderarm: ");
  Serial.print(lUnderarmHigh);
  Serial.print(", ");
  Serial.println(lUnderarmLow);
*/
}

void setData() {

  //setup
  int tols[6];
  int avgs[6];

  Serial.println("Tolerances.cpp");
  Serial.println("Press button when ready");
  while(digitalRead(buttonPin) != 1){}
  delay(250);
  
  // -------- Arms at side --------
  Serial.println("Put your arms at your side \nPress button when ready");
  
  //wait for button press
  while(digitalRead(buttonPin) != 1){}
  delay(1000);
  
  computeTol(&tols[0], &avgs[0]);
  
  armSRBackTol = tols[0];
  armSRShoulderTol = tols[1];
  armSRUnderTol = tols[2];

  armSLBackTol = tols[0];
  armSLShoulderTol = tols[4];
  armSLUnderTol = tols[5];
  
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
  
  computeTol(&tols[0], &avgs[0]);
  
  armSR45BackTol = tols[0];
  armSR45ShoulderTol = tols[1];
  armSR45UnderTol = tols[2];

  armSL45BackTol = tols[3];
  armSL45ShoulderTol = tols[4];
  armSL45UnderTol = tols[5];
  
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
  
  computeTol(&tols[0], &avgs[0]);
  
  armSR90BackTol = tols[0];
  armSR90ShoulderTol = tols[1];
  armSR90UnderTol = tols[2];
  
  armSL90BackTol = tols[3];
  armSL90ShoulderTol = tols[4];
  armSL90UnderTol = tols[5];
  
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
  
  computeTol(&tols[0], &avgs[0]);
  
  armSR135BackTol = tols[0];
  armSR135ShoulderTol = tols[1];
  armSR135UnderTol = tols[2];
  
  armSL135BackTol = tols[3];
  armSL135ShoulderTol = tols[4];
  armSL135UnderTol = tols[5];
  
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
  
  computeTol(&tols[0], &avgs[0]);
  
  armSR180BackTol = tols[0];
  armSR180ShoulderTol = tols[1];
  armSR180UnderTol = tols[2];
  
  armSL180BackTol = tols[3];
  armSL180ShoulderTol = tols[4];
  armSL180UnderTol = tols[5];
  
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
  
  computeTol(&tols[0], &avgs[0]);
  
  armFR45BackTol = tols[0];
  armFR45ShoulderTol = tols[1];
  armFR45UnderTol = tols[2];
  
  armFL45BackTol = tols[3];
  armFL45ShoulderTol = tols[4];
  armFL45UnderTol = tols[5];
  
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
  
  computeTol(&tols[0], &avgs[0]);
  
  armFR90BackTol = tols[0];
  armFR90ShoulderTol = tols[1];
  armFR90UnderTol = tols[2];
  
  armFL90BackTol = tols[3];
  armFL90ShoulderTol = tols[4];
  armFL90UnderTol = tols[5];
  
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
  
  computeTol(&tols[0], &avgs[0]);
  
  armFR135BackTol = tols[0];
  armFR135ShoulderTol = tols[1];
  armFR135UnderTol = tols[2];
  
  armFL135BackTol = tols[3];
  armFL135ShoulderTol = tols[4];
  armFL135UnderTol = tols[5];
  
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
  
  computeTol(&tols[0], &avgs[0]);
  
  armFR180BackTol = tols[0];
  armFR180ShoulderTol = tols[1];
  armFR180UnderTol = tols[2];
  
  armFL180BackTol = tols[3];
  armFL180ShoulderTol = tols[4];
  armFL180UnderTol = tols[5];
  
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
  
  computeTol(&tols[0], &avgs[0]);
  
  backStraightBackTol = tols[0];
  
  backStraightBackVal = avgs[0];

  delay(250);
  
  // -------- Back bent fwd --------
  Serial.println("Bend forward and touch your toes \nPress button when ready");
  
  //wait for button press
  while(digitalRead(buttonPin) != 1){}
  delay(1000);
  
  computeTol(&tols[0], &avgs[0]);
  
  backBentFBackTol = tols[0];
  
  backBentFBackVal = avgs[0];
  
  delay(250);
  
  // -------- Back bent back --------
  Serial.println("Bend backward \nPress button when ready");
  
  //wait for button press
  while(digitalRead(buttonPin) != 1){}
  delay(1000);
  
  computeTol(&tols[0], &avgs[0]);

  backBentBBackTol = tols[0];
  
  backBentBBackVal = avgs[0];
  
  delay(250);
}

