
int blinkDelay =0;

void setup(){
    Serial.begin(9600);
    pinMode(LED_BUILTIN,OUTPUT);
}

void loop(){

    switch(Serial.available()){

        int i = Serial.parseInt();
        case 0:
            break;
        default :
            blinkDelay = i;
    }
    digitalWrite(LED_BUILTIN,HIGH);
    delay(blinkDelay);
    digitalWrite(LED_BUILTIN,LOW);
    delay(blinkDelay);

}