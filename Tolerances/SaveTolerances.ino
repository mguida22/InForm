/*
 * SaveTolerances
 * Kylie Dale and Michael Guida
 */
 
// ------------------------ Right ------------------------
void sendTolerances(){
  // -------- armSideRight --------
  Serial.print("armSRBackTol ");
  Serial.println(armSRBackTol);
  Serial.print("armSRShoulderTol ");
  Serial.println(armSRShoulderTol);
  Serial.print("armSRUnderTol ");
  Serial.println(armSRUnderTol);
}
/*
// -------- armSideRight45 --------
int armSR45BackTol = -1;
int armSR45ShoulderTol = -1;
int armSR45UnderTol = -1;

// -------- armSideRight90 --------
int armSR90BackTol = -1;
int armSR90ShoulderTol = -1;
int armSR90UnderTol = -1;

// -------- armSideRight135 --------
int armSR135BackTol = -1;
int armSR135ShoulderTol = -1;
int armSR135UnderTol = -1;

// -------- armSideRight180 --------
int armSR180BackTol = -1;
int armSR180ShoulderTol = -1;
int armSR180UnderTol = -1;

// -------- armFwdRight45 --------
int armFR45BackTol = -1;
int armFR45ShoulderTol = -1;
int armFR45UnderTol = -1;

// -------- armFwdRight90 --------
int armFR90BackTol = -1;
int armFR90ShoulderTol = -1;
int armFR90UnderTol = -1;

// -------- armFwdRight135 --------
int armFR135BackTol = -1;
int armFR135ShoulderTol = -1;
int armFR135UnderTol = -1;

// -------- armFwdRight180 --------
int armFR180BackTol = -1;
int armFR180ShoulderTol = -1;
int armFR180UnderTol = -1;

// ------------------------ Left ------------------------

// -------- armSideLeft --------
int armSLBackTol = -1;
int armSLShoulderTol = -1;
int armSLUnderTol = -1;

// -------- armSideLeft45 --------
int armSL45BackTol = -1;
int armSL45ShoulderTol = -1;
int armSL45UnderTol = -1;

// -------- armSideLeft90 --------
int armSL90BackTol = -1;
int armSL90ShoulderTol = -1;
int armSL90UnderTol = -1;

// -------- armSideLeft135 --------
int armSL135BackTol = -1;
int armSL135ShoulderTol = -1;
int armSL135UnderTol = -1;

// -------- armSideLeft180 --------
int armSL180BackTol = -1;
int armSL180ShoulderTol = -1;
int armSL180UnderTol = -1;

// -------- armFwdLeft45 --------
int armFL45BackTol = -1;
int armFL45ShoulderTol = -1;
int armFL45UnderTol = -1;

// -------- armFwdLeft90 --------
int armFL90BackTol = -1;
int armFL90ShoulderTol = -1;
int armFL90UnderTol = -1;

// -------- armFwdLeft135 --------
int armFL135BackTol = -1;
int armFL135ShoulderTol = -1;
int armFL135UnderTol = -1;

// -------- armFwdLeft180 --------
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
int backBentBBackTol = -1;
int backBentBShoulderTol = -1;
int backBentBUnderTol = -1;*/