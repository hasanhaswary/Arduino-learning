int LED = 2;

void setup() {
  // Serial.begin(115200);
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);
  //Serial.println("On");
  if(digitalRead(LED)==HIGH){
    Serial.println("On");
  }else{
    Serial.println("Off");
  }
  delay(1000);
  digitalWrite(LED, LOW);
  //Serial.println("Off");
    if(digitalRead(LED)==HIGH){
    Serial.println("On");
  }else{
    Serial.println("Off");
  }
  delay(1000);
  Serial.println();
}