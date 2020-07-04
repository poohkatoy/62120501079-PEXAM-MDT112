#include <Stepper.h>
#include "TM1637.h"

const int stepsPerRevolution = 200;  
const int CLK = 17;
const int DIO = 16;

Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);
TM1637 sevenSegment(CLK, DIO);

int stepCount = 0;       

void setup() {
  sevenSegment.init();
  sevenSegment.set(7);
  Serial.begin(9600);
}

void loop() {

  myStepper.step(stepsPerRevolution);
  stepCount = stepsPerRevolution;
  sevenSegment.displayNum(stepCount);
  stepCount++;
  delay(500);
}