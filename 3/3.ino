#include <Stepper.h>

const int stepsPerRevolution = 200;  

Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

void setup() {
    myStepper.setSpeed(60);
    Serial.begin(9600);

    Serial.println("Step CW 360  Degrees");
    myStepper.step(stepsPerRevolution);
    delay(900);
}

void loop() {

}