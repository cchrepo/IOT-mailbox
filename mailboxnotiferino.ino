Servo flagServo;
int flagStart = 0;
int flagGotmail = 90;


void setup() {
    
    flagServo.attach(D0);
    flagServo.write(flagStart);
    Particle.publish("twilio_sms","Mail Notifier is ready!" PRIVATE);

}

void loop() {
    delay(60000); //60 sec
    System.sleep(A4, RISING); 
    flagServo.write(flagGotmail);
    Particle.publish("twilio_sms", "You got mail", PRIVAT);

}