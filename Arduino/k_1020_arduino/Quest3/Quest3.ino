int count = 0;
unsigned long past = 0;
int flag = 0;
bool go = true;
void setup(){
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  unsigned long now = millis();

  if(now-past>=1000){
    past = now;
    flag = 1;
  }
  if(flag == 1){
    if(go){
      Serial.println(count);
      count++;
      flag=0;
      if(count>100){go = false;}
    }
    if(go == false){
      Serial.println(count);
      count--;
      flag=0;
      if(count==0) {go = true;}
    }
  }

    if(Serial.available()>0){
    switch(Serial.read())
    {
      case '1':
        digitalWrite(13,HIGH);break;
      case '0':
        digitalWrite(13,LOW);break;
    }
  }
}