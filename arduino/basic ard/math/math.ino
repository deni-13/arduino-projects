int a=4;
int v=3;
float sonuc;
void setup() {
  
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
sonuc=a+v;
Serial.println(sonuc);
while(1);
}
