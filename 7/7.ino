#include <Stepper.h>

#define STEPS_PER_360_DEGREE 2038

const int button = 2;
int buttonState = 0;

Stepper stepper(STEPS_PER_360_DEGREE, 8, 9, 10, 11); 

void setup() {
    Serial.begin(9600);
    pinMode(button, INPUT);
    buttonState = digitalRead(button);

    stepper.setSpeed(16); 
    
    Serial.println("Step CCW 360 Degrees");
    stepper.step(-STEPS_PER_360_DEGREE);
    delay(800);
}

void loop() {

}