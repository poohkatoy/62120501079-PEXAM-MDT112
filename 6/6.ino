int buzzer = 8;

void setup(){
    pinMode(buzzer, OUTPUT);

    delay(800);
    tone(buzzer, 600, 300);
}

void loop(){

}