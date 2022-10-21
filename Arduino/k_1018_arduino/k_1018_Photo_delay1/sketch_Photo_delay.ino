
const int sensorPin =A0;

void setup()
{
    pinMode(LED_BUILTIN,OUTPUT);
}

void loop()
{
	int delayval = analogRead(sensorPin);
    digitalWrite(LED_BUILTIN,HIGH);
    delay(delayval);
    digitalWrite(LED_BUILTIN,LOW);
    delay(delayval);
}
