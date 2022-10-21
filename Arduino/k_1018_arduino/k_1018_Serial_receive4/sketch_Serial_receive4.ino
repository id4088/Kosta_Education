int blinkDelay = 0;

void setup(){
    Serial.begin(9600);
    pinMode(LED_BUILTIN,OUTPUT);
}

void loop(){
    digitalWrite(LED_BUILTIN,HIGH);
    delay(blinkDelay);
    digitalWrite(LED_BUILTIN,LOW);
    delay(blinkDelay);
}

void serialEvent(){

    while (Serial.available()){
        char ch = (char) Serial.read();
        Serial.write(ch);
        if(isDigit(ch)){
            blinkDelay =(ch-'0');
            blinkDelay = 100* blinkDelay;
        }
}
}