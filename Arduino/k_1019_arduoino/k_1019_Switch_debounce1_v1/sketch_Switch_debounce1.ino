
const int inputPin =2;
const int debounceDelay = 10;
bool last_button_state = LOW;
int ledState = LOW;

bool debounce(int pin){
    bool state;
    bool previousState;

    previousState = digitalRead(pin);
    for(int counter=0; counter< debounceDelay; counter++){
        delay(1);
        state = digitalRead(pin);
        if(state != previousState){
            counter =0;
            previousState = state;
        }
    }
}
void setup(){

pinMode(inputPin,INPUT);
pinMode(LED_BUILTIN,OUTPUT);

}

void loop(){

    bool button_state = debounce(inputPin);
    
    if (last_button_state != button_state && button_state == HIGH){
        ledState = !ledState;
        digitalWrite(LED_BUILTIN,ledState);
    }
    last_button_state = button_state;
}