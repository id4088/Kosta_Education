#include "arduino-timer.h"
int count =1;
time t;
volatile boolean state = false;

void setup(){
    
    pinMode(LED_BUILTIN,OUTPUT);
    Serial.begin(9600);
    Serial.println("LED Control Program Star");
    Serial.println("input:1=LED ON");
    Serial.println("input:2=LEDOFF");
}

void loop(){

    digitalWrite(LED_BUILTIN,state);

    if(){

        for(count;count<100;){

            Serial.println(count++);
            delay(100);
        }

        for(count;count>0;){
            Serial.println(count--);
            delay(100);
        }
        }
    
}


void serialEvent(){
 if(Serial.available()>0){
        char Receive_Data;
        Receive_Data = Serial.read();

        switch (Receive_Data)
        {
        case '0':
            state = false;
            break;

        case '1':
            state = true;
            break;
        
        default:
            state = false;   
        break;
        }
    }
}

