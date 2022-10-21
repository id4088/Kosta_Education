
int blinkdelay =0;

void setup(){
    Serial.begin(9600);
    pinMode(LED_BUILTIN,OUTPUT);
}

void loop(){

    if (Serial.available()){
        char ch = (char) Serial.read();
        if(isDigit(ch)){
            blinkdelay = (ch-'0');
            blinkdelay = blinkdelay *100;
        }
    }

    digitalWrite(LED_BUILTIN,HIGH);
    delay(blinkdelay);
    digitalWrite(LED_BUILTIN,LOW);
    delay(blinkdelay);
}