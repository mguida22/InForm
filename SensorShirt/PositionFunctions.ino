/*
  Position Functions
  Kylie Dale and Michael Guida
*/

boolean armAtSideRight() {
  if(backValue > (armSRBackVal - armSRBackTol) && backValue < (armSRBackVal + armSRBackTol)) {
    if(shoulderValue > (armSRShoulderVal - armSRShoulderTol) && shoulderValue < (armSRShoulderVal + armSRShoulderTol)) {
      if(underarmValue > (armSRUnderVal - armSRUnderTol) && underarmValue < (armSRUnderVal + armSRUnderTol) {
        return true;
      }
    }
  }
  return false;
}

boolean armSideRight45() {
  if(backValue > (armSR45BackVal - armSR45BackTol) && backValue < (armSR45BackVal + armSR45BackTol)) {
    if(shoulderValue > (armSR45ShoulderVal - armSR45ShoulderTol) && shoulderValue < (armSR45ShoulderVal + armSR45ShoulderTol)) {
      if(underarmValue > (armSR45UnderVal - armSR45UnderTol) && underarmValue < (armSR45UnderVal + armSR45UnderTol)) {
        return true;
      }
    }
  }
  return false;
}

boolean armSideRight90() {
  if(backValue > (armSR90BackVal - armSR90BackTol) && backValue < (armSR90BackVal + armSR90BackTol)) {
    if(shoulderValue > (armSR90ShoulderVal - armSR90ShoulderTol) && shoulderValue < (armSR90ShoulderVal + armSR90ShoulderTol)) {
      if(underarmValue > (armSR90UnderVal - armSR90UnderTol) && underarmValue < (armSR90UnderVal + armSR90UnderTol)) {
        return true;
      }
    }
  }
  return false;
}

boolean armSideRight135() {
  if(backValue > (armSR135BackVal - armSR135BackTol) && backValue < (armSR135BackVal + armSR135BackTol)) {
    if(shoulderValue > (armSR135ShoulderVal - armSR135ShoulderTol) && shoulderValue < (armSR135ShoulderVal + armSR135ShoulderTol)) {
      if(underarmValue > (armSR135UnderVal - armSR135UnderTol) && underarmValue < (armSR135UnderVal + armSR135UnderTol)) {
        return true;
      }
    }
  }
  return false;
}

boolean armSideRight180() {
  if(backValue > (armSR180BackVal - armSR180BackTol) && backValue < (armSR180BackVal + armSR180BackTol)) {
    if(shoulderValue > (armSR180ShoulderVal - armSR180ShoulderTol) && shoulderValue < (armSR180ShoulderVal + armSR180ShoulderTol)) {
      if(underarmValue > (armSR180UnderVal - armSR180UnderTol) && underarmValue < (armSR180UnderVal + armSR180UnderTol)) {
        return true;
      }
    }
  }
  return false;
}

boolean armFwdRight45() {
  if(backValue > (armFR45BackVal - armFR45BackTol) && backValue < (armFR45BackVal + armFR45BackTol)) {
    if(shoulderValue > (armFR45ShoulderVal - armFR45ShoulderTol) && shoulderValue < (armFR45ShoulderVal + armFR45ShoulderTol)) {
      if(underarmValue > (armFR45UnderVal - armFR45UnderTol) && underarmValue < (armFR45UnderVal + armFR45UnderTol)) {
        return true;
      }
    }
  }
  return false;
}

boolean armFwdRight90() {
  if(backValue > (armFR90BackVal - armFR90BackTol) && backValue < (armFR90BackVal + armFR90BackTol)) {
    if(shoulderValue > (armFR90ShoulderVal - armFR90ShoulderTol) && shoulderValue < (armFR90ShoulderVal + armFR90ShoulderTol)) {
      if(underarmValue > (armFR90UnderVal - armFR90UnderTol) && underarmValue < (armFR90UnderVal + armFR90UnderTol)) {
        return true;
      }
    }
  }
  return false;
}

boolean armFwdRight135() {
  if(backValue > (armFR135BackVal - armFR135BackTol) && backValue < (armFR135BackVal + armFR135BackTol)) {
    if(shoulderValue > (armFR135ShoulderVal - armFR135ShoulderTol) && shoulderValue < (armFR135ShoulderVal + armFR135ShoulderTol)) {
      if(underarmValue > (armFR135UnderVal - armFR135UnderTol) && underarmValue < (armFR135UnderVal + armFR135UnderTol)) {
        return true;
      }
    }
  }
  return false;
}

boolean armFwdRight180() {
  if(backValue > (armFR180BackVal - armFR180BackTol) && backValue < (armFR180BackVal + armFR180BackTol)) {
    if(shoulderValue > (armFR180ShoulderVal - armFR180ShoulderTol) && shoulderValue < (armFR180ShoulderVal + armFR180ShoulderTol)) {
      if(underarmValue > (armFR180UnderVal - armFR180UnderTol) && underarmValue < (armFR180UnderVal + armFR180UnderTol)) {
        return true;
      }
    }
  }
  return false;
}

boolean backStraight() {
  if(backValue > (backStraightBackVal - backStraightBackTol) && backValue < (backStraightBackVal + backStraightBackTol)) {
    if(shoulderValue > (backStraightShoulderVal - backStraightShoulderTol) && shoulderValue < (backStraightShoulderVal + backStraightShoulderTol)) {
      if(underarmValue > (backStraightUnderVal - backStraightUnderTol) && underarmValue < (backStraightUnderVal + backStraightUnderTol)) {
        return true;
      }
    }
  }
  return false;
}

boolean backBentFwd() {
  if(backValue > (backBentFBackVal - backBentFBackTol) && backValue < (backBentFBackVal + backBentFBackTol)) {
    if(shoulderValue > (backBentFShoulderVal - backBentFShoulderTol) && shoulderValue < (backBentFShoulderVal + backBentFShoulderTol)) {
      if(underarmValue > (backBentFUnderVal - backBentFUnderTol) && underarmValue < (backBentFUnderVal + backBentFUnderTol)) {
        return true;
      }
    }
  }
  return false;
}

boolean backBentBack() {
  if(backValue > (backBentBBackVal - backBentBBackTol) && backValue < (backBentBBackVal + backBentBBackTol)) {
    if(shoulderValue > (backBentBShoulderVal - backBentBShoulderTol) && shoulderValue < (backBentBShoulderVal + backBentBShoulderTol)) {
      if(underarmValue > (backBentBUnderVal - backBentBUnderTol) && underarmValue < (backBentBUnderVal + backBentBUnderTol)) {
        return true;
      }
    }
  }
  return false;
}
