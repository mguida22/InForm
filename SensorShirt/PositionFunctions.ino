/*
 * Position Functions
 * Kylie Dale and Michael Guida
 */

// ------------------------ Right ------------------------

boolean armAtSideRight() {
  if(analogRead(backPin) > (armSRBackVal - armSRBackTol) && analogRead(backPin) < (armSRBackVal + armSRBackTol)) {
    if(analogRead(rShoulderPin) > (armSRShoulderVal - armSRShoulderTol) && analogRead(rShoulderPin) < (armSRShoulderVal + armSRShoulderTol)) {
      if(analogRead(rUnderarmPin) > (armSRUnderVal - armSRUnderTol) && analogRead(rUnderarmPin) < (armSRUnderVal + armSRUnderTol)) {
        return true;
      }
    }
  }
  return false;
}

boolean armSideRight45() {
  if(analogRead(backPin) > (armSR45BackVal - armSR45BackTol) && analogRead(backPin) < (armSR45BackVal + armSR45BackTol)) {
    if(analogRead(rShoulderPin) > (armSR45ShoulderVal - armSR45ShoulderTol) && analogRead(rShoulderPin) < (armSR45ShoulderVal + armSR45ShoulderTol)) {
      if(analogRead(rUnderarmPin) > (armSR45UnderVal - armSR45UnderTol) && analogRead(rUnderarmPin) < (armSR45UnderVal + armSR45UnderTol)) {
        return true;
      }
    }
  }
  return false;
}

boolean armSideRight90() {
  if(analogRead(backPin) > (armSR90BackVal - armSR90BackTol) && analogRead(backPin) < (armSR90BackVal + armSR90BackTol)) {
    if(analogRead(rShoulderPin) > (armSR90ShoulderVal - armSR90ShoulderTol) && analogRead(rShoulderPin) < (armSR90ShoulderVal + armSR90ShoulderTol)) {
      if(analogRead(rUnderarmPin) > (armSR90UnderVal - armSR90UnderTol) && analogRead(rUnderarmPin) < (armSR90UnderVal + armSR90UnderTol)) {
        return true;
      }
    }
  }
  return false;
}

boolean armSideRight135() {
  if(analogRead(backPin) > (armSR135BackVal - armSR135BackTol) && analogRead(backPin) < (armSR135BackVal + armSR135BackTol)) {
    if(analogRead(rShoulderPin) > (armSR135ShoulderVal - armSR135ShoulderTol) && analogRead(rShoulderPin) < (armSR135ShoulderVal + armSR135ShoulderTol)) {
      if(analogRead(rUnderarmPin) > (armSR135UnderVal - armSR135UnderTol) && analogRead(rUnderarmPin) < (armSR135UnderVal + armSR135UnderTol)) {
        return true;
      }
    }
  }
  return false;
}

boolean armSideRight180() {
  if(analogRead(backPin) > (armSR180BackVal - armSR180BackTol) && analogRead(backPin) < (armSR180BackVal + armSR180BackTol)) {
    if(analogRead(rShoulderPin) > (armSR180ShoulderVal - armSR180ShoulderTol) && analogRead(rShoulderPin) < (armSR180ShoulderVal + armSR180ShoulderTol)) {
      if(analogRead(rUnderarmPin) > (armSR180UnderVal - armSR180UnderTol) && analogRead(rUnderarmPin) < (armSR180UnderVal + armSR180UnderTol)) {
        return true;
      }
    }
  }
  return false;
}

boolean armFwdRight45() {
  if(analogRead(backPin) > (armFR45BackVal - armFR45BackTol) && analogRead(backPin) < (armFR45BackVal + armFR45BackTol)) {
    if(analogRead(rShoulderPin) > (armFR45ShoulderVal - armFR45ShoulderTol) && analogRead(rShoulderPin) < (armFR45ShoulderVal + armFR45ShoulderTol)) {
      if(analogRead(rUnderarmPin) > (armFR45UnderVal - armFR45UnderTol) && analogRead(rUnderarmPin) < (armFR45UnderVal + armFR45UnderTol)) {
        return true;
      }
    }
  }
  return false;
}

boolean armFwdRight90() {
  //if(analogRead(backPin) > (armFR90BackVal - armFR90BackTol) && analogRead(backPin) < (armFR90BackVal + armFR90BackTol)) {
    if(analogRead(rShoulderPin) > (armFR90ShoulderVal - armFR90ShoulderTol) && analogRead(rShoulderPin) < (armFR90ShoulderVal + armFR90ShoulderTol)) {
      if(analogRead(rUnderarmPin) > (armFR90UnderVal - armFR90UnderTol) && analogRead(rUnderarmPin) < (armFR90UnderVal + armFR90UnderTol)) {
        return true;
      }
    }
  //}
  return false;
}

boolean armFwdRight135() {
  if(analogRead(backPin) > (armFR135BackVal - armFR135BackTol) && analogRead(backPin) < (armFR135BackVal + armFR135BackTol)) {
    if(analogRead(rShoulderPin) > (armFR135ShoulderVal - armFR135ShoulderTol) && analogRead(rShoulderPin) < (armFR135ShoulderVal + armFR135ShoulderTol)) {
      if(analogRead(rUnderarmPin) > (armFR135UnderVal - armFR135UnderTol) && analogRead(rUnderarmPin) < (armFR135UnderVal + armFR135UnderTol)) {
        return true;
      }
    }
  }
  return false;
}

boolean armFwdRight180() {
  if(analogRead(backPin) > (armFR180BackVal - armFR180BackTol) && analogRead(backPin) < (armFR180BackVal + armFR180BackTol)) {
    if(analogRead(rShoulderPin) > (armFR180ShoulderVal - armFR180ShoulderTol) && analogRead(rShoulderPin) < (armFR180ShoulderVal + armFR180ShoulderTol)) {
      if(analogRead(rUnderarmPin) > (armFR180UnderVal - armFR180UnderTol) && analogRead(rUnderarmPin) < (armFR180UnderVal + armFR180UnderTol)) {
        return true;
      }
    }
  }
  return false;
}

// ------------------------- Left -------------------------

boolean armAtSideLeft() {
  if(analogRead(backPin) > (armSLBackVal - armSLBackTol) && analogRead(backPin) < (armSLBackVal + armSLBackTol)) {
    if(analogRead(lShoulderPin) > (armSLShoulderVal - armSLShoulderTol) && analogRead(lShoulderPin) < (armSLShoulderVal + armSLShoulderTol)) {
      if(analogRead(lUnderarmPin) > (armSLUnderVal - armSLUnderTol) && analogRead(lUnderarmPin) < (armSLUnderVal + armSLUnderTol)) {
        return true;
      }
    }
  }
  return false;
}

boolean armSideLeft45() {
  if(analogRead(backPin) > (armSL45BackVal - armSL45BackTol) && analogRead(backPin) < (armSL45BackVal + armSL45BackTol)) {
    if(analogRead(lShoulderPin) > (armSL45ShoulderVal - armSL45ShoulderTol) && analogRead(lShoulderPin) < (armSL45ShoulderVal + armSL45ShoulderTol)) {
      if(analogRead(lUnderarmPin) > (armSL45UnderVal - armSL45UnderTol) && analogRead(lUnderarmPin) < (armSL45UnderVal + armSL45UnderTol)) {
        return true;
      }
    }
  }
  return false;
}

boolean armSideLeft90() {
  if(analogRead(backPin) > (armSL90BackVal - armSL90BackTol) && analogRead(backPin) < (armSL90BackVal + armSL90BackTol)) {
    if(analogRead(lShoulderPin) > (armSL90ShoulderVal - armSL90ShoulderTol) && analogRead(lShoulderPin) < (armSL90ShoulderVal + armSL90ShoulderTol)) {
      if(analogRead(lUnderarmPin) > (armSL90UnderVal - armSL90UnderTol) && analogRead(lUnderarmPin) < (armSL90UnderVal + armSL90UnderTol)) {
        return true;
      }
    }
  }
  return false;
}

boolean armSideLeft135() {
  if(analogRead(backPin) > (armSL135BackVal - armSL135BackTol) && analogRead(backPin) < (armSL135BackVal + armSL135BackTol)) {
    if(analogRead(lShoulderPin) > (armSL135ShoulderVal - armSL135ShoulderTol) && analogRead(lShoulderPin) < (armSL135ShoulderVal + armSL135ShoulderTol)) {
      if(analogRead(lUnderarmPin) > (armSL135UnderVal - armSL135UnderTol) && analogRead(lUnderarmPin) < (armSL135UnderVal + armSL135UnderTol)) {
        return true;
      }
    }
  }
  return false;
}

boolean armSideLeft180() {
  if(analogRead(backPin) > (armSL180BackVal - armSL180BackTol) && analogRead(backPin) < (armSL180BackVal + armSL180BackTol)) {
    if(analogRead(lShoulderPin) > (armSL180ShoulderVal - armSL180ShoulderTol) && analogRead(lShoulderPin) < (armSL180ShoulderVal + armSL180ShoulderTol)) {
      if(analogRead(lUnderarmPin) > (armSL180UnderVal - armSL180UnderTol) && analogRead(lUnderarmPin) < (armSL180UnderVal + armSL180UnderTol)) {
        return true;
      }
    }
  }
  return false;
}

boolean armFwdLeft45() {
  if(analogRead(backPin) > (armFL45BackVal - armFL45BackTol) && analogRead(backPin) < (armFL45BackVal + armFL45BackTol)) {
    if(analogRead(lShoulderPin) > (armFL45ShoulderVal - armFL45ShoulderTol) && analogRead(lShoulderPin) < (armFL45ShoulderVal + armFL45ShoulderTol)) {
      if(analogRead(lUnderarmPin) > (armFL45UnderVal - armFL45UnderTol) && analogRead(lUnderarmPin) < (armFL45UnderVal + armFL45UnderTol)) {
        return true;
      }
    }
  }
  return false;
}

boolean armFwdLeft90() {
  if(analogRead(backPin) > (armFL90BackVal - armFL90BackTol) && analogRead(backPin) < (armFL90BackVal + armFL90BackTol)) {
    if(analogRead(lShoulderPin) > (armFL90ShoulderVal - armFL90ShoulderTol) && analogRead(lShoulderPin) < (armFL90ShoulderVal + armFL90ShoulderTol)) {
      if(analogRead(lUnderarmPin) > (armFL90UnderVal - armFL90UnderTol) && analogRead(lUnderarmPin) < (armFL90UnderVal + armFL90UnderTol)) {
        return true;
      }
    }
  }
  return false;
}

boolean armFwdLeft135() {
  if(analogRead(backPin) > (armFL135BackVal - armFL135BackTol) && analogRead(backPin) < (armFL135BackVal + armFL135BackTol)) {
    if(analogRead(lShoulderPin) > (armFL135ShoulderVal - armFL135ShoulderTol) && analogRead(lShoulderPin) < (armFL135ShoulderVal + armFL135ShoulderTol)) {
      if(analogRead(lUnderarmPin) > (armFL135UnderVal - armFL135UnderTol) && analogRead(lUnderarmPin) < (armFL135UnderVal + armFL135UnderTol)) {
        return true;
      }
    }
  }
  return false;
}

boolean armFwdLeft180() {
  if(analogRead(backPin) > (armFL180BackVal - armFL180BackTol) && analogRead(backPin) < (armFL180BackVal + armFL180BackTol)) {
    if(analogRead(lShoulderPin) > (armFL180ShoulderVal - armFL180ShoulderTol) && analogRead(lShoulderPin) < (armFL180ShoulderVal + armFL180ShoulderTol)) {
      if(analogRead(lUnderarmPin) > (armFL180UnderVal - armFL180UnderTol) && analogRead(lUnderarmPin) < (armFL180UnderVal + armFL180UnderTol)) {
        return true;
      }
    }
  }
  return false;
}

// ------------------------- Back -------------------------

boolean backStraight() {
  if(analogRead(backPin) > (backStraightBackVal - backStraightBackTol) && analogRead(backPin) < (backStraightBackVal + backStraightBackTol)) {
    //if(shoulderValue > (backStraightShoulderVal - backStraightShoulderTol) && shoulderValue < (backStraightShoulderVal + backStraightShoulderTol)) {
      //if(underarmValue > (backStraightUnderVal - backStraightUnderTol) && underarmValue < (backStraightUnderVal + backStraightUnderTol)) {
        return true;
      //}
    //}
  }
  return false;
}

boolean backBentFwd() {
  if(analogRead(backPin) > (backBentFBackVal - backBentFBackTol) && analogRead(backPin) < (backBentFBackVal + backBentFBackTol)) {
    //if(shoulderValue > (backBentFShoulderVal - backBentFShoulderTol) && shoulderValue < (backBentFShoulderVal + backBentFShoulderTol)) {
      //if(underarmValue > (backBentFUnderVal - backBentFUnderTol) && underarmValue < (backBentFUnderVal + backBentFUnderTol)) {
        return true;
      //}
    //}
  }
  return false;
}

boolean backBentBack() {
  if(analogRead(backPin) > (backBentBBackVal - backBentBBackTol) && analogRead(backPin) < (backBentBBackVal + backBentBBackTol)) {
    //if(shoulderValue > (backBentBShoulderVal - backBentBShoulderTol) && shoulderValue < (backBentBShoulderVal + backBentBShoulderTol)) {
      //if(underarmValue > (backBentBUnderVal - backBentBUnderTol) && underarmValue < (backBentBUnderVal + backBentBUnderTol)) {
        return true;
      //}
    //}
  }
  return false;
}
