const int button = 2;
int buttonState = 0;

int buzzer = 8;

void setup(){
    Serial.begin(9600);

    pinMode(button, INPUT_PULLUP);
    pinMode(buzzer, OUTPUT);
}
void loop(){
    buttonState = digitalRead(button);

    if (buttonState == LOW) {
        tone(buzzer, 800, 800);
    } else {
        noTone(buzzer);
    }
}