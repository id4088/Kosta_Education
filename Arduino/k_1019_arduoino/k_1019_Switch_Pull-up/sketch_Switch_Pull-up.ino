const int inputPin =2;

void setup(){
    pinMode(LED_BUILTIN,OUTPUT);
    pinMode(inputPin,INPUT_PULLUP);
}

void loop(){
    int val = digitalRead(inputPin);
    if( val ==HIGH){
        digitalWrite(LED_BUILTIN,LOW);
    }
    else{
        digitalWrite(LED_BUILTIN,HIGH);
    }
}