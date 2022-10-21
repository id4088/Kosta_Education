
int blinkdelay =0;

void setup(){
    Serial.begin(9600);
    pinMode(LED_BUILTIN,OUTPUT);
}

void loop(){

    switch (Serial.available()){
        char ch = (char) Serial.read();
        default:
            blinkdelay = (ch-'0');
            blinkdelay = 100 * blinkdelay;

    }

    digitalWrite(LED_BUILTIN,HIGH);
    delay(blinkdelay);
    digitalWrite(LED_BUILTIN,LOW);
    delay(blinkdelay);
}