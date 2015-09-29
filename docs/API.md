## Using Position Functions

The position functions can be used to build up complete positions.

For example to assert if the users right arm is raised at 90 degrees forward:

```C
armFwdRight90();
```

This will return a boolean value of true or false based off of the users position.

We can use these simple position functions to build a more complex position such as the plank:

```C
boolean plank() {
  if (armFwdRight90() && armFwdLeft90() && backStraight()) {
    return true;
  } else {
    return false;
  }
}
```

## Function Calls

### General Functions

Function Call     | Return Type | Description
----------------- | ----------- | -----------
setVariables()    | void        | Runs the calibration process for the shirt and sets all position variables
computeAvg()      | int*        | Takes 100 readings over 5 seconds of all values from the shirt and averages them

### Position Functions

Function Call     | Return Type | Description
----------------- | ----------- | -----------
armAtSideRight()  | boolean     | asserts if the user's right arm is at their side
armSideRight45()  | boolean     | asserts if the user's right arm is raised 45 degrees to their side
armSideRight90()  | boolean     | asserts if the user's right arm is raised 90 degrees to their side
armSideRight135() | boolean     | asserts if the user's right arm is raised 135 degrees to their side
armSideRight180() | boolean     | asserts if the user's right arm is raised 180 degrees to their side
armFwdRight45()   | boolean     | asserts if the user's right arm is raised 45 degrees forward
armFwdRight90()   | boolean     | asserts if the user's right arm is raised 90 degrees forward
armFwdRight135()  | boolean     | asserts if the user's right arm is raised 135 degrees forward
armFwdRight180()  | boolean     | asserts if the user's right arm is raised 180 degrees forward
armAtSideLeft()   | boolean     | asserts if the user's left arm is at their side
armSideLeft45()   | boolean     | asserts if the user's left arm is raised 45 degrees to their side
armSideLeft90()   | boolean     | asserts if the user's left arm is raised 90 degrees to their side
armSideLeft135()  | boolean     | asserts if the user's left arm is raised 135 degrees to their side
armSideLeft180()  | boolean     | asserts if the user's left arm is raised 180 degrees to their side
armFwdLeft45()    | boolean     | asserts if the user's left arm is raised 45 degrees forward
armFwdLeft90()    | boolean     | asserts if the user's left arm is raised 90 degrees forward
armFwdLeft135()   | boolean     | asserts if the user's left arm is raised 135 degrees forward
armFwdLeft180()   | boolean     | asserts if the user's left arm is raised 180 degrees forward
backStraight()    | boolean     | asserts if the user's back is straight
backBentBack()    | boolean     | asserts if the user's back is bent backward
backBentFwd()     | boolean     | asserts if the user's back is bent forward
