int a;
void setup() {
  Serial.begin(9600);
  for(a=0;a<5;a++){
    Serial.println(a);
    delay(1000);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
