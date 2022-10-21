int count = 0;
unsigned long previous_time, current_time=0;

boolean count_state=true;
volatile boolean state = false;

void setup(){

    pinMode(LED_BUILTIN,OUTPUT);
    Serial.begin(9600);

    previous_time = millis();
}

void loop(){
    digitalWrite(LED_BUILTIN,state);

    current_time = millis();

    if (current_time-previous_time>=300){
        previous_time = current_time;

        
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