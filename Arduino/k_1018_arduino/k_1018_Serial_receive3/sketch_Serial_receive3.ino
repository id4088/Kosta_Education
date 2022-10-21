
const int maxChars =5;

char strValue[maxChars+1];
int idx = 0;

int blinkDelay = 0;
void setup(){
    Serial.begin(9600);
    pinMode(LED_BUILTIN,OUTPUT);
}

void loop(){

    if(Serial.available()){

        char ch = (char) Serial.read();
        
        if (idx < maxChars && isDigit(ch)){
            strValue[idx++] = ch;
        }
        else{
            strValue[idx] =0;
            blinkDelay = atoi(strValue);
            idx = 0;
        }
    }
    
    digitalWrite(LED_BUILTIN,HIGH);
    delay(blinkDelay);
    digitalWrite(LED_BUILTIN,LOW);
    delay(blinkDelay);

}