int count =1;

void setup(){
    Serial.begin(9600);
}

void loop(){

    for(count;count<100;){

        Serial.println(count++);
        delay(10);
    }

    for(count;count>0;){
        Serial.println(count--);
        delay(10);
        }
    
        
    

}