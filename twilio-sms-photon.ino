string body = "You got mail!";

void setup() {
    Particle.publis("twilio_sms",body);

}

void loop() {
}