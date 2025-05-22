const int sensorPin = 36;
 
void setup()
{
  Serial.begin(115200);
}
 
void loop()
{
    int analogVal = analogRead(sensorPin);
     
    Serial.println(analogVal);
    delay(200);
}
