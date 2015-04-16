/*
 * SaveTolerances
 * Kylie Dale and Michael Guida
 */
 
// ------------------------ Right ------------------------
void sendTolerances(){
  // -------- armSideRight ---------
  Serial.print("int armSRBackTol = ");
  Serial.print(armSRBackTol);
  Serial.println(";");
  Serial.print("int armSRShoulderTol = ");
  Serial.print(armSRShoulderTol);
  Serial.println(";");
  Serial.print("int armSRUnderTol = ");
  Serial.print(armSRUnderTol);
  Serial.println(";");

  // -------- armSideRight45 --------
  Serial.print("int armSR45BackTol = ");
  Serial.print(armSR45BackTol);
  Serial.println(";");
  Serial.print("int armSR45ShoulderTol = ");
  Serial.print(armSR45ShoulderTol);
  Serial.println(";");
  Serial.print("int armSR45UnderTol = ");
  Serial.print(armSR45UnderTol);
  Serial.println(";");
  
  // -------- armSideRight90 --------
  Serial.print("int armSR90BackTol = ");
  Serial.print(armSR90BackTol);
  Serial.println(";");
  Serial.print("int armSR90ShoulderTol = ");
  Serial.print(armSR90ShoulderTol);
  Serial.println(";");
  Serial.print("int armSR90UnderTol = ");
  Serial.print(armSR90UnderTol);
  Serial.println(";");
  
  // -------- armSideRight135 --------
  Serial.print("int armSR135BackTol = ");
  Serial.print(armSR135BackTol);
  Serial.println(";");
  Serial.print("int armSR135ShoulderTol = ");
  Serial.print(armSR135ShoulderTol);
  Serial.println(";");
  Serial.print("int armSR135UnderTol = ");
  Serial.print(armSR135UnderTol);
  Serial.println(";");
  
  // -------- armSideRight180 --------
  Serial.print("int armSR180BackTol = ");
  Serial.print(armSR180BackTol);
  Serial.println(";");
  Serial.print("int armSR180ShoulderTol = ");
  Serial.print(armSR180ShoulderTol);
  Serial.println(";");
  Serial.print("int armSR180UnderTol = ");
  Serial.print(armSR180UnderTol);
  Serial.println(";");
  
  // -------- armFwdRight45 --------
  Serial.print("int armFR45BackTol = ");
  Serial.print(armFR45BackTol);
  Serial.println(";");
  Serial.print("int armFR45ShoulderTol = ");
  Serial.print(armFR45ShoulderTol);
  Serial.println(";");
  Serial.print("int armFR45UnderTol = ");
  Serial.print(armFR45UnderTol);
  Serial.println(";");
  
  // -------- armFwdRight90 --------
  Serial.print("int armFR90BackTol = ");
  Serial.print(armFR90BackTol);
  Serial.println(";");
  Serial.print("int armFR90ShoulderTol = ");
  Serial.print(armFR90ShoulderTol);
  Serial.println(";");
  Serial.print("int armFR90UnderTol = ");
  Serial.print(armFR90UnderTol);
  Serial.println(";");
  
  // -------- armFwdRight135 --------
  Serial.print("int armFR135BackTol = ");
  Serial.print(armFR135BackTol);
  Serial.println(";");
  Serial.print("int armFR135ShoulderTol = ");
  Serial.print(armFR135ShoulderTol);
  Serial.println(";");
  Serial.print("int armFR135UnderTol = ");
  Serial.print(armFR135UnderTol);
  Serial.println(";");
  
  // -------- armFwdRight180 --------
  Serial.print("int armFR180BackTol = ");
  Serial.print(armFR180BackTol);
  Serial.println(";");
  Serial.print("int armFR180ShoulderTol = ");
  Serial.print(armFR180ShoulderTol);
  Serial.println(";");
  Serial.print("int armFR180UnderTol = ");
  Serial.print(armFR180UnderTol);
  Serial.println(";");
  
  // ------------------------ Left ------------------------
  
  // -------- armSideLeft --------
  Serial.print("int armSLBackTol = ");
  Serial.print(armSLBackTol);
  Serial.println(";");
  Serial.print("int armSLShoulderTol = ");
  Serial.print(armSLShoulderTol);
  Serial.println(";");
  Serial.print("int armSLUnderTol = ");
  Serial.print(armSLUnderTol);
  Serial.println(";");
  
  // -------- armSideLeft45 --------
  Serial.print("int armSL45BackTol = ");
  Serial.print(armSL45BackTol);
  Serial.println(";");
  Serial.print("int armSL45ShoulderTol = ");
  Serial.print(armSL45ShoulderTol);
  Serial.println(";");
  Serial.print("int armSL45UnderTol = ");
  Serial.print(armSL45UnderTol);
  Serial.println(";");
  
  // -------- armSideLeft90 --------
  Serial.print("int armSL90BackTol = ");
  Serial.print(armSL90BackTol);
  Serial.println(";");
  Serial.print("int armSL90ShoulderTol = ");
  Serial.print(armSL90ShoulderTol);
  Serial.println(";");
  Serial.print("int armSL90UnderTol = ");
  Serial.print(armSL90UnderTol);
  Serial.println(";");
  
  // -------- armSideLeft135 --------
  Serial.print("int armSL135BackTol = ");
  Serial.print(armSL135BackTol);
  Serial.println(";");
  Serial.print("int armSL135ShoulderTol = ");
  Serial.print(armSL135ShoulderTol);
  Serial.println(";");
  Serial.print("int armSL135UnderTol = ");
  Serial.print(armSL135UnderTol);
  Serial.println(";");
  
  // -------- armSideLeft180 --------
  Serial.print("int armSL180BackTol = ");
  Serial.print(armSL180BackTol);
  Serial.println(";");
  Serial.print("int armSL180ShoulderTol = ");
  Serial.print(armSL180ShoulderTol);
  Serial.println(";");
  Serial.print("int armSL180UnderTol = ");
  Serial.print(armSL180UnderTol);
  Serial.println(";");
  
  // -------- armFwdLeft45 --------
  Serial.print("int armFL45BackTol = ");
  Serial.print(armFL45BackTol);
  Serial.println(";");
  Serial.print("int armFL45ShoulderTol = ");
  Serial.print(armFL45ShoulderTol);
  Serial.println(";");
  Serial.print("int armFL45UnderTol = ");
  Serial.print(armFL45UnderTol);
  Serial.println(";");
  
  // -------- armFwdLeft90 --------
  Serial.print("int armFL90BackTol = ");
  Serial.print(armFL90BackTol);
  Serial.println(";");
  Serial.print("int armFL90ShoulderTol = ");
  Serial.print(armFL90ShoulderTol);
  Serial.println(";");
  Serial.print("int armFL90UnderTol = ");
  Serial.print(armFL90UnderTol);
  Serial.println(";");
  
  // -------- armFwdLeft135 --------
  Serial.print("int armFL135BackTol = ");
  Serial.print(armFL135BackTol);
  Serial.println(";");
  Serial.print("int armFL135ShoulderTol = ");
  Serial.print(armFL135ShoulderTol);
  Serial.println(";");
  Serial.print("int armFL135UnderTol = ");
  Serial.print(armFL135UnderTol);
  Serial.println(";");
  
  // -------- armFwdLeft180 --------
  Serial.print("int armFL180BackTol = ");
  Serial.print(armFL180BackTol);
  Serial.println(";");
  Serial.print("int armFL180ShoulderTol = ");
  Serial.print(armFL180ShoulderTol);
  Serial.println(";");
  Serial.print("int armFL180UnderTol = ");
  Serial.print(armFL180UnderTol);
  Serial.println(";");
  
  // -------- backStraight --------
  Serial.print("int backStraightBackTol = ");
  Serial.print(backStraightBackTol);
  Serial.println(";");
  Serial.print("int backStraightShoulderTol = ");
  Serial.print(backStraightShoulderTol);
  Serial.println(";");
  Serial.print("int backStraightUnderTol = ");
  Serial.print(backStraightUnderTol);
  Serial.println(";");
  
  // -------- backBentFwd --------
  Serial.print("int backBentFBackTol = ");
  Serial.print(backBentFBackTol);
  Serial.println(";");
  Serial.print("int backBentFShoulderTol = ");
  Serial.print(backBentFShoulderTol);
  Serial.println(";");
  Serial.print("int backBentFUnderTol = ");
  Serial.print(backBentFUnderTol);
  Serial.println(";");
  
  // -------- backBentBack --------
  Serial.print("int backBentBBackTol = ");
  Serial.print(backBentBBackTol);
  Serial.println(";");
  Serial.print("int backBentBShoulderTol = ");
  Serial.print(backBentBShoulderTol);
  Serial.println(";");
  Serial.print("int backBentBUnderTol = ");
  Serial.print(backBentBUnderTol);
  Serial.println(";");
}
