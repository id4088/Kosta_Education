
int blinkDelay =0;

void setup(){
    Serial.begin(9600);
    pinMode(LED_BUILTIN,OUTPUT);
}

void loop(){

    if(Serial.available()){

        int i = Serial.parseInt();
        
        if (i!=0){
            blinkDelay = i;
        }
    }
    
    digitalWrite(LED_BUILTIN,HIGH);
    delay(blinkDelay);
    digitalWrite(LED_BUILTIN,LOW);
    delay(blinkDelay);

}