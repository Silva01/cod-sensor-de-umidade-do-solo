void setup(){
  Serial.begin(57600);
}

void loop(){
  Serial.println(analogRead(A0));
  delay(100);
}
