int tam=3;
int tam1=5;

int sonuc;


void setup(){
  
  Serial.begin(9600);
}


void loop(){

  sonuc=tam+tam1;

  Serial.print(sonuc);
  while(1);
}
