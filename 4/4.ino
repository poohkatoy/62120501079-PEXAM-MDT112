#include <Stepper.h>

#define STEPS_PER_360_DEGREE 2038

Stepper stepper(STEPS_PER_360_DEGREE, 8, 10, 9, 11); 

void setup() {
    Serial.begin(9600);

    stepper.setSpeed(16); 
    
    Serial.println("Step CCW 360 Degrees");
    stepper.step(-STEPS_PER_360_DEGREE);
    delay(800);
}

void loop() {

}