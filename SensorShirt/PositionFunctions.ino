/*
 * Position Functions
 * Kylie Dale and Michael Guida
 */

// ------------------------ Right ------------------------

boolean armAtSideRight() {
  if(backValue > (armSRBackVal - armSRBackTol) && backValue < (armSRBackVal + armSRBackTol)) {
    if(rShoulderValue > (armSRShoulderVal - armSRShoulderTol) && rShoulderValue < (armSRShoulderVal + armSRShoulderTol)) {
      if(rUnderarmValue > (armSRUnderVal - armSRUnderTol) && rUnderarmValue < (armSRUnderVal + armSRUnderTol)) {
        return true;
      }
    }
  }
  return false;
}

boolean armSideRight45() {
  if(backValue > (armSR45BackVal - armSR45BackTol) && backValue < (armSR45BackVal + armSR45BackTol)) {
    if(rShoulderValue > (armSR45ShoulderVal - armSR45ShoulderTol) && rShoulderValue < (armSR45ShoulderVal + armSR45ShoulderTol)) {
      if(rUnderarmValue > (armSR45UnderVal - armSR45UnderTol) && rUnderarmValue < (armSR45UnderVal + armSR45UnderTol)) {
        return true;
      }
    }
  }
  return false;
}

boolean armSideRight90() {
  if(backValue > (armSR90BackVal - armSR90BackTol) && backValue < (armSR90BackVal + armSR90BackTol)) {
    if(rShoulderValue > (armSR90ShoulderVal - armSR90ShoulderTol) && rShoulderValue < (armSR90ShoulderVal + armSR90ShoulderTol)) {
      if(rUnderarmValue > (armSR90UnderVal - armSR90UnderTol) && rUnderarmValue < (armSR90UnderVal + armSR90UnderTol)) {
        return true;
      }
    }
  }
  return false;
}

boolean armSideRight135() {
  if(backValue > (armSR135BackVal - armSR135BackTol) && backValue < (armSR135BackVal + armSR135BackTol)) {
    if(rShoulderValue > (armSR135ShoulderVal - armSR135ShoulderTol) && rShoulderValue < (armSR135ShoulderVal + armSR135ShoulderTol)) {
      if(rUnderarmValue > (armSR135UnderVal - armSR135UnderTol) && rUnderarmValue < (armSR135UnderVal + armSR135UnderTol)) {
        return true;
      }
    }
  }
  return false;
}

boolean armSideRight180() {
  if(backValue > (armSR180BackVal - armSR180BackTol) && backValue < (armSR180BackVal + armSR180BackTol)) {
    if(rShoulderValue > (armSR180ShoulderVal - armSR180ShoulderTol) && rShoulderValue < (armSR180ShoulderVal + armSR180ShoulderTol)) {
      if(rUnderarmValue > (armSR180UnderVal - armSR180UnderTol) && rUnderarmValue < (armSR180UnderVal + armSR180UnderTol)) {
        return true;
      }
    }
  }
  return false;
}

boolean armFwdRight45() {
  if(backValue > (armFR45BackVal - armFR45BackTol) && backValue < (armFR45BackVal + armFR45BackTol)) {
    if(rShoulderValue > (armFR45ShoulderVal - armFR45ShoulderTol) && rShoulderValue < (armFR45ShoulderVal + armFR45ShoulderTol)) {
      if(rUnderarmValue > (armFR45UnderVal - armFR45UnderTol) && rUnderarmValue < (armFR45UnderVal + armFR45UnderTol)) {
        return true;
      }
    }
  }
  return false;
}

boolean armFwdRight90() {
  
  if(backValue > (armFR90BackVal - armFR90BackTol) && backValue < (armFR90BackVal + armFR90BackTol)) {
    if(rShoulderValue > (armFR90ShoulderVal - armFR90ShoulderTol) && rShoulderValue < (armFR90ShoulderVal + armFR90ShoulderTol)) {
      if(rUnderarmValue > (armFR90UnderVal - armFR90UnderTol) && rUnderarmValue < (armFR90UnderVal + armFR90UnderTol)) {
        return true;
      }
    }
  }
  return false;
}

boolean armFwdRight135() {
  if(backValue > (armFR135BackVal - armFR135BackTol) && backValue < (armFR135BackVal + armFR135BackTol)) {
    if(rShoulderValue > (armFR135ShoulderVal - armFR135ShoulderTol) && rShoulderValue < (armFR135ShoulderVal + armFR135ShoulderTol)) {
      if(rUnderarmValue > (armFR135UnderVal - armFR135UnderTol) && rUnderarmValue < (armFR135UnderVal + armFR135UnderTol)) {
        return true;
      }
    }
  }
  return false;
}

boolean armFwdRight180() {
  if(backValue > (armFR180BackVal - armFR180BackTol) && backValue < (armFR180BackVal + armFR180BackTol)) {
    if(rShoulderValue > (armFR180ShoulderVal - armFR180ShoulderTol) && rShoulderValue < (armFR180ShoulderVal + armFR180ShoulderTol)) {
      if(rUnderarmValue > (armFR180UnderVal - armFR180UnderTol) && rUnderarmValue < (armFR180UnderVal + armFR180UnderTol)) {
        return true;
      }
    }
  }
  return false;
}

// ------------------------- Left -------------------------

boolean armAtSideLeft() {
  if(backValue > (armSLBackVal - armSLBackTol) && backValue < (armSLBackVal + armSLBackTol)) {
    if(lShoulderValue > (armSLShoulderVal - armSLShoulderTol) && lShoulderValue < (armSLShoulderVal + armSLShoulderTol)) {
      if(lUnderarmValue > (armSLUnderVal - armSLUnderTol) && lUnderarmValue < (armSLUnderVal + armSLUnderTol)) {
        return true;
      }
    }
  }
  return false;
}

boolean armSideLeft45() {
  if(backValue > (armSL45BackVal - armSL45BackTol) && backValue < (armSL45BackVal + armSL45BackTol)) {
    if(lShoulderValue > (armSL45ShoulderVal - armSL45ShoulderTol) && lShoulderValue < (armSL45ShoulderVal + armSL45ShoulderTol)) {
      if(lUnderarmValue > (armSL45UnderVal - armSL45UnderTol) && lUnderarmValue < (armSL45UnderVal + armSL45UnderTol)) {
        return true;
      }
    }
  }
  return false;
}

boolean armSideLeft90() {
  if(backValue > (armSL90BackVal - armSL90BackTol) && backValue < (armSL90BackVal + armSL90BackTol)) {
    if(lShoulderValue > (armSL90ShoulderVal - armSL90ShoulderTol) && lShoulderValue < (armSL90ShoulderVal + armSL90ShoulderTol)) {
      if(lUnderarmValue > (armSL90UnderVal - armSL90UnderTol) && lUnderarmValue < (armSL90UnderVal + armSL90UnderTol)) {
        return true;
      }
    }
  }
  return false;
}

boolean armSideLeft135() {
  if(backValue > (armSL135BackVal - armSL135BackTol) && backValue < (armSL135BackVal + armSL135BackTol)) {
    if(lShoulderValue > (armSL135ShoulderVal - armSL135ShoulderTol) && lShoulderValue < (armSL135ShoulderVal + armSL135ShoulderTol)) {
      if(lUnderarmValue > (armSL135UnderVal - armSL135UnderTol) && lUnderarmValue < (armSL135UnderVal + armSL135UnderTol)) {
        return true;
      }
    }
  }
  return false;
}

boolean armSideLeft180() {
  if(backValue > (armSL180BackVal - armSL180BackTol) && backValue < (armSL180BackVal + armSL180BackTol)) {
    if(lShoulderValue > (armSL180ShoulderVal - armSL180ShoulderTol) && lShoulderValue < (armSL180ShoulderVal + armSL180ShoulderTol)) {
      if(lUnderarmValue > (armSL180UnderVal - armSL180UnderTol) && lUnderarmValue < (armSL180UnderVal + armSL180UnderTol)) {
        return true;
      }
    }
  }
  return false;
}

boolean armFwdLeft45() {
  if(backValue > (armFL45BackVal - armFL45BackTol) && backValue < (armFL45BackVal + armFL45BackTol)) {
    if(lShoulderValue > (armFL45ShoulderVal - armFL45ShoulderTol) && lShoulderValue < (armFL45ShoulderVal + armFL45ShoulderTol)) {
      if(lUnderarmValue > (armFL45UnderVal - armFL45UnderTol) && lUnderarmValue < (armFL45UnderVal + armFL45UnderTol)) {
        return true;
      }
    }
  }
  return false;
}

boolean armFwdLeft90() {
  if(backValue > (armFL90BackVal - armFL90BackTol) && backValue < (armFL90BackVal + armFL90BackTol)) {
    if(lShoulderValue > (armFL90ShoulderVal - armFL90ShoulderTol) && lShoulderValue < (armFL90ShoulderVal + armFL90ShoulderTol)) {
      if(lUnderarmValue > (armFL90UnderVal - armFL90UnderTol) && lUnderarmValue < (armFL90UnderVal + armFL90UnderTol)) {
        return true;
      }
    }
  }
  return false;
}

boolean armFwdLeft135() {
  if(backValue > (armFL135BackVal - armFL135BackTol) && backValue < (armFL135BackVal + armFL135BackTol)) {
    if(lShoulderValue > (armFL135ShoulderVal - armFL135ShoulderTol) && lShoulderValue < (armFL135ShoulderVal + armFL135ShoulderTol)) {
      if(lUnderarmValue > (armFL135UnderVal - armFL135UnderTol) && lUnderarmValue < (armFL135UnderVal + armFL135UnderTol)) {
        return true;
      }
    }
  }
  return false;
}

boolean armFwdLeft180() {
  if(backValue > (armFL180BackVal - armFL180BackTol) && backValue < (armFL180BackVal + armFL180BackTol)) {
    if(lShoulderValue > (armFL180ShoulderVal - armFL180ShoulderTol) && lShoulderValue < (armFL180ShoulderVal + armFL180ShoulderTol)) {
      if(lUnderarmValue > (armFL180UnderVal - armFL180UnderTol) && lUnderarmValue < (armFL180UnderVal + armFL180UnderTol)) {
        return true;
      }
    }
  }
  return false;
}

// ------------------------- Back -------------------------

boolean backStraight() {
  if(backValue > (backStraightBackVal - backStraightBackTol) && backValue < (backStraightBackVal + backStraightBackTol)) {
    //if(shoulderValue > (backStraightShoulderVal - backStraightShoulderTol) && shoulderValue < (backStraightShoulderVal + backStraightShoulderTol)) {
      //if(underarmValue > (backStraightUnderVal - backStraightUnderTol) && underarmValue < (backStraightUnderVal + backStraightUnderTol)) {
        return true;
      //}
    //}
  }
  return false;
}

boolean backBentFwd() {
  if(backValue > (backBentFBackVal - backBentFBackTol) && backValue < (backBentFBackVal + backBentFBackTol)) {
    //if(shoulderValue > (backBentFShoulderVal - backBentFShoulderTol) && shoulderValue < (backBentFShoulderVal + backBentFShoulderTol)) {
      //if(underarmValue > (backBentFUnderVal - backBentFUnderTol) && underarmValue < (backBentFUnderVal + backBentFUnderTol)) {
        return true;
      //}
    //}
  }
  return false;
}

boolean backBentBack() {
  if(backValue > (backBentBBackVal - backBentBBackTol) && backValue < (backBentBBackVal + backBentBBackTol)) {
    //if(shoulderValue > (backBentBShoulderVal - backBentBShoulderTol) && shoulderValue < (backBentBShoulderVal + backBentBShoulderTol)) {
      //if(underarmValue > (backBentBUnderVal - backBentBUnderTol) && underarmValue < (backBentBUnderVal + backBentBUnderTol)) {
        return true;
      //}
    //}
  }
  return false;
}
