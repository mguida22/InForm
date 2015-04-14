const int EXTRATOL = 10;

int * computeTol() {
  int i = 600;
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

    i--;
    delay(50);
  }

  backHigh = backHigh - backLow + EXTRATOL;
  rShoulderHigh = rShoulderHigh - rShoulderLow + EXTRATOL;
  lShoulderHigh = lShoulderHigh - lShoulderLow + EXTRATOL;
  rUnderarmHigh = rUnderarmHigh - rUnderarmLow + EXTRATOL;
  lUnderarmHigh = lUnderarmHigh - lUnderarmLow + EXTRATOL;

  int ret[6] = { backHigh, rShoulderHigh, rUnderarmHigh, backHigh, lShoulderHigh, lUnderarmHigh };
  return ret;
}

void setTolerances() {

  //setup
  int *avgs;

  Serial.println("Tolerances.cpp");
  Serial.println("Press button when ready");
  while(digitalRead(buttonPin) != 1){}
  
  // -------- Arms at side --------
  Serial.println("Put your arms at your side \nPress button when ready");
  
  //wait for button press
  while(digitalRead(buttonPin) != 1){}
  
  avgs = computeTol();
  
  armSRBackTol = avgs[0];
  armSRShoulderTol = avgs[1];
  armSRUnderTol = avgs[2];

  armSLBackTol = avgs[0];
  armSLShoulderTol = avgs[4];
  armSLUnderTol = avgs[5];
  
  delay(250);
  
  // -------- Arms at side 45 degrees --------
  Serial.println("Put your arms 45 degrees to your side \nPress button when ready");
  
  //wait for button press
  while(digitalRead(buttonPin) != 1){}
  
  avgs = computeAvg();
  
  armSR45BackTol = avgs[0];
  armSR45ShoulderTol = avgs[1];
  armSR45UnderTol = avgs[2];

  armSL45BackTol = avgs[3];
  armSL45ShoulderTol = avgs[4];
  armSL45UnderTol = avgs[5];

  delay(250);
  
  // -------- Arms at side 90 degrees --------
  Serial.println("Put your arms 90 degrees to your side \nPress button when ready");
  
  //wait for button press
  while(digitalRead(buttonPin) != 1){}
  
  avgs = computeAvg();
  
  armSR90BackTol = avgs[0];
  armSR90ShoulderTol = avgs[1];
  armSR90UnderTol = avgs[2];
  
  armSL90BackTol = avgs[3];
  armSL90ShoulderTol = avgs[4];
  armSL90UnderTol = avgs[5];

  delay(250);
  
  // -------- Arms at side 135 degrees --------
  Serial.println("Put your arms 135 degrees to your side \nPress button when ready");
  
  //wait for button press
  while(digitalRead(buttonPin) != 1){}
  
  avgs = computeAvg();
  
  armSR135BackTol = avgs[0];
  armSR135ShoulderTol = avgs[1];
  armSR135UnderTol = avgs[2];
  
  armSL135BackTol = avgs[3];
  armSL135ShoulderTol = avgs[4];
  armSL135UnderTol = avgs[5];

  delay(250);
  
  // -------- Arms at side 180 degrees --------
  Serial.println("Put your arms 180 degrees to your side \nPress button when ready");
  
  //wait for button press
  while(digitalRead(buttonPin) != 1){}
  
  avgs = computeAvg();
  
  armSR180BackTol = avgs[0];
  armSR180ShoulderTol = avgs[1];
  armSR180UnderTol = avgs[2];
  
  armSL180BackTol = avgs[3];
  armSL180ShoulderTol = avgs[4];
  armSL180UnderTol = avgs[5];

  // -------- Arms fwd 45 degrees --------
  Serial.println("Put your arms 45 degrees forward \nPress button when ready");
  
  //wait for button press
  while(digitalRead(buttonPin) != 1){}
  
  avgs = computeAvg();
  
  armFR45BackTol = avgs[0];
  armFR45ShoulderTol = avgs[1];
  armFR45UnderTol = avgs[2];
  
  armFL45BackTol = avgs[3];
  armFL45ShoulderTol = avgs[4];
  armFL45UnderTol = avgs[5];
  
  delay(250);
  
  // -------- Arms fwd 90 degrees --------
  Serial.println("Put your arms 90 degrees forward \nPress button when ready");
  
  //wait for button press
  while(digitalRead(buttonPin) != 1){}
  
  avgs = computeAvg();
  
  armFR90BackTol = avgs[0];
  armFR90ShoulderTol = avgs[1];
  armFR90UnderTol = avgs[2];
  
  armFL90BackTol = avgs[3];
  armFL90ShoulderTol = avgs[4];
  armFL90UnderTol = avgs[5];

  delay(250);
  
  // -------- Arms fwd 135 degrees --------
  Serial.println("Put your arms 135 degrees forward \nPress button when ready");
  
  //wait for button press
  while(digitalRead(buttonPin) != 1){}
  
  avgs = computeAvg();
  
  armFR135BackTol = avgs[0];
  armFR135ShoulderTol = avgs[1];
  armFR135UnderTol = avgs[2];
  
  armFL135BackTol = avgs[3];
  armFL135ShoulderTol = avgs[4];
  armFL135UnderTol = avgs[5];
  
  delay(250);

  // -------- Arms fwd 180 degrees --------
  Serial.println("Put your arms 180 degrees forward \nPress button when ready");
  
  //wait for button press
  while(digitalRead(buttonPin) != 1){}
  
  avgs = computeAvg();
  
  armFR180BackTol = avgs[0];
  armFR180ShoulderTol = avgs[1];
  armFR180UnderTol = avgs[2];
  
  armFL180BackTol = avgs[3];
  armFL180ShoulderTol = avgs[4];
  armFL180UnderTol = avgs[5];
  
  delay(250);

  // -------- Back straight --------
  Serial.println("Stand as straight as possible \nPress button when ready");
  
  //wait for button press
  while(digitalRead(buttonPin) != 1){}
  
  avgs = computeAvg();
  
  backStraightBackTol = avgs[0];

  delay(250);
  
  // -------- Back bent fwd --------
  Serial.println("Bend forward and touch your toes \nPress button when ready");
  
  //wait for button press
  while(digitalRead(buttonPin) != 1){}
  
  avgs = computeAvg();
  
  backBentFBackTol = avgs[0];
  
  delay(250);
  
  // -------- Back bent back --------
  Serial.println("Bend backward \nPress button when ready");
  
  //wait for button press
  while(digitalRead(buttonPin) != 1){}
  
  avgs = computeAvg();
  
  backBentBBackTol = avgs[0];
  
  delay(250);
}

