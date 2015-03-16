/*
 * SetVariables
 * Kylie Dale and Michael Guida
 * 
 * Naming:
 * S --> side
 * F --> fwd
 * B --> back
 * R --> right
 * L --> left
 * # --> degrees of rotation
 */
 
// ------------------------ Right ------------------------

// -------- armSideRight --------
int armSRBackVal = -1;
int armSRShoulderVal = -1;
int armSRUnderVal = -1;

int armSRBackTol = -1;
int armSRShoulderTol = -1;
int armSRUnderTol = -1;

// -------- armSideRight45 --------
int armSR45BackVal = -1;
int armSR45ShoulderVal = -1;
int armSR45UnderVal = -1;

int armSR45BackTol = -1;
int armSR45ShoulderTol = -1;
int armSR45UnderTol = -1;

// -------- armSideRight90 --------
int armSR90BackVal = -1;
int armSR90ShoulderVal = -1;
int armSR90UnderVal = -1;

int armSR90BackTol = -1;
int armSR90ShoulderTol = -1;
int armSR90UnderTol = -1;

// -------- armSideRight135 --------
int armSR135BackVal = -1;
int armSR135ShoulderVal = -1;
int armSR135UnderVal = -1;

int armSR135BackTol = -1;
int armSR135ShoulderTol = -1;
int armSR135UnderTol = -1;

// -------- armSideRight180 --------
int armSR180BackVal = -1;
int armSR180ShoulderVal = -1;
int armSR180UnderVal = -1;

int armSR180BackTol = -1;
int armSR180ShoulderTol = -1;
int armSR180UnderTol = -1;

// -------- armFwdRight45 --------
int armFR45BackVal = -1;
int armFR45ShoulderVal = -1;
int armFR45UnderVal = -1;

int armFR45BackTol = -1;
int armFR45ShoulderTol = -1;
int armFR45UnderTol = -1;

// -------- armFwdRight90 --------
int armFR90BackVal = -1;
int armFR90ShoulderVal = -1;
int armFR90UnderVal = -1;

int armFR90BackTol = -1;
int armFR90ShoulderTol = -1;
int armFR90UnderTol = -1;

// -------- armFwdRight135 --------
int armFR135BackVal = -1;
int armFR135ShoulderVal = -1;
int armFR135UnderVal = -1;

int armFR135BackTol = -1;
int armFR135ShoulderTol = -1;
int armFR135UnderTol = -1;

// -------- armFwdRight180 --------
int armFR180BackVal = -1;
int armFR180ShoulderVal = -1;
int armFR180UnderVal = -1;

int armFR180BackTol = -1;
int armFR180ShoulderTol = -1;
int armFR180UnderTol = -1;

// ------------------------ Left ------------------------

// -------- armSideLeft --------
int armSLBackVal = -1;
int armSLShoulderVal = -1;
int armSLUnderVal = -1;

int armSLBackTol = -1;
int armSLShoulderTol = -1;
int armSLUnderTol = -1;

// -------- armSideLeft45 --------
int armSL45BackVal = -1;
int armSL45ShoulderVal = -1;
int armSL45UnderVal = -1;

int armSL45BackTol = -1;
int armSL45ShoulderTol = -1;
int armSL45UnderTol = -1;

// -------- armSideLeft90 --------
int armSL90BackVal = -1;
int armSL90ShoulderVal = -1;
int armSL90UnderVal = -1;

int armSL90BackTol = -1;
int armSL90ShoulderTol = -1;
int armSL90UnderTol = -1;

// -------- armSideLeft135 --------
int armSL135BackVal = -1;
int armSL135ShoulderVal = -1;
int armSL135UnderVal = -1;

int armSL135BackTol = -1;
int armSL135ShoulderTol = -1;
int armSL135UnderTol = -1;

// -------- armSideLeft180 --------
int armSL180BackVal = -1;
int armSL180ShoulderVal = -1;
int armSL180UnderVal = -1;

int armSL180BackTol = -1;
int armSL180ShoulderTol = -1;
int armSL180UnderTol = -1;

// -------- armFwdLeft45 --------
int armFL45BackVal = -1;
int armFL45ShoulderVal = -1;
int armFL45UnderVal = -1;

int armFL45BackTol = -1;
int armFL45ShoulderTol = -1;
int armFL45UnderTol = -1;

// -------- armFwdLeft90 --------
int armFL90BackVal = -1;
int armFL90ShoulderVal = -1;
int armFL90UnderVal = -1;

int armFL90BackTol = -1;
int armFL90ShoulderTol = -1;
int armFL90UnderTol = -1;

// -------- armFwdLeft135 --------
int armFL135BackVal = -1;
int armFL135ShoulderVal = -1;
int armFL135UnderVal = -1;

int armFL135BackTol = -1;
int armFL135ShoulderTol = -1;
int armFL135UnderTol = -1;

// -------- armFwdLeft180 --------
int armFL180BackVal = -1;
int armFL180ShoulderVal = -1;
int armFL180UnderVal = -1;

int armFL180BackTol = -1;
int armFL180ShoulderTol = -1;
int armFL180UnderTol = -1;


// -------- backStraight --------
int backStraightBackVal = -1;
int backStraightShoulderVal = -1;
int backStraightUnderVal = -1;

int backStraightBackTol = -1;
int backStraightShoulderTol = -1;
int backStraightUnderTol = -1;

// -------- backBentFwd --------
int backBentFBackVal = -1;
int backBentFShoulderVal = -1;
int backBentFUnderVal = -1;

int backBentFBackTol = -1;
int backBentFShoulderTol = -1;
int backBentFUnderTol = -1;

// -------- backBentBack --------
int backBentBBackVal = -1;
int backBentBShoulderVal = -1;
int backBentBUnderVal = -1;

int backBentBBackTol = -1;
int backBentBShoulderTol = -1;
int backBentBUnderTol = -1;


void setVariables(){
  
  // -------- Arms at side --------
  Serial.println("Put your arms at your side \nPress enter when ready");
  Serial.read();
  
  armSRBackVal = -1;
  armSRShoulderVal = -1;
  armSRUnderVal = -1;

  armSLBackVal = -1;
  armSLShoulderVal = -1;
  armSLUnderVal = -1;
  
  // -------- Arms at side 45 degrees --------
  Serial.println("Put your arms 45 degrees to your side \nPress enter when ready");
  
  armSR45BackVal = -1;
  armSR45ShoulderVal = -1;
  armSR45UnderVal = -1;

  armSL45BackVal = -1;
  armSL45ShoulderVal = -1;
  armSL45UnderVal = -1;

  // -------- Arms at side 90 degrees --------
  Serial.println("Put your arms 90 degrees to your side \nPress enter when ready");
  
  armSR90BackVal = -1;
  armSR90ShoulderVal = -1;
  armSR90UnderVal = -1;
  
  armSL90BackVal = -1;
  armSL90ShoulderVal = -1;
  armSL90UnderVal = -1;

  // -------- Arms at side 135 degrees --------
  Serial.println("Put your arms 135 degrees to your side \nPress enter when ready");
  
  armSR135BackVal = -1;
  armSR135ShoulderVal = -1;
  armSR135UnderVal = -1;
  
  armSL135BackVal = -1;
  armSL135ShoulderVal = -1;
  armSL135UnderVal = -1;

  // -------- Arms at side 180 degrees --------
  Serial.println("Put your arms 180 degrees to your side \nPress enter when ready");
  
  armSR180BackVal = -1;
  armSR180ShoulderVal = -1;
  armSR180UnderVal = -1;
  
  armSL180BackVal = -1;
  armSL180ShoulderVal = -1;
  armSL180UnderVal = -1;

  // -------- Arms fwd 45 degrees --------
  Serial.println("Put your arms 45 degrees forward \nPress enter when ready");
  
  armFR45BackVal = -1;
  armFR45ShoulderVal = -1;
  armFR45UnderVal = -1;
  
  armFL45BackVal = -1;
  armFL45ShoulderVal = -1;
  armFL45UnderVal = -1;

  // -------- Arms fwd 90 degrees --------
  Serial.println("Put your arms 90 degrees forward \nPress enter when ready");
  
  armFR90BackVal = -1;
  armFR90ShoulderVal = -1;
  armFR90UnderVal = -1;
  
  armFL90BackVal = -1;
  armFL90ShoulderVal = -1;
  armFL90UnderVal = -1;

  // -------- Arms fwd 135 degrees --------
  Serial.println("Put your arms 135 degrees forward \nPress enter when ready");
  
  armFR135BackVal = -1;
  armFR135ShoulderVal = -1;
  armFR135UnderVal = -1;
  
  armFL135BackVal = -1;
  armFL135ShoulderVal = -1;
  armFL135UnderVal = -1;

  // -------- Arms fwd 180 degrees --------
  Serial.println("Put your arms 180 degrees forward \nPress enter when ready");
  
  armFR180BackVal = -1;
  armFR180ShoulderVal = -1;
  armFR180UnderVal = -1;
  
  armFL180BackVal = -1;
  armFL180ShoulderVal = -1;
  armFL180UnderVal = -1;

  // -------- Back straight --------
  Serial.println("Stand as straight as possible \nPress enter when ready");
  
  backStraightBackVal = -1;
  backStraightShoulderVal = -1;
  backStraightUnderVal = -1;

  // -------- Back bent fwd --------
  Serial.println("Bend forward and touch your toes \nPress enter when ready");
  
  backBentFBackVal = -1;
  backBentFShoulderVal = -1;
  backBentFUnderVal = -1;
  
  // -------- Back bent back --------
  Serial.println("Bend backward \nPress enter when ready");
  
  backBentBBackVal = -1;
  backBentBShoulderVal = -1;
  backBentBUnderVal = -1;
}
