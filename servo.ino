servo cchServo;
int angel=0;

void setup() {
    cchServo.attch(D0);
}
void loop() {
    if(angel >90){
        angel = 0;
    }
    
    cchServo.write(angel);
    delay(20);
    angel++
}