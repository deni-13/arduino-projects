
int led[7] = {2,3,4,5,6,7,8}; // Dizi tanımlama işlemini gerçekleştirdik

int ses_deger, i;



void setup() 

{

  for(i=0; i<9; i++) //For'u birden fazla işlem yapacağımız zaman kullanırız.
  
  {
    pinMode(led[i],OUTPUT); //Led tanımlama işlemi

    }


}

void loop()

{


ses_deger = analogRead(A0);

ses_deger = ses_deger / 45; //Ses değer formülü 35 ses sensörümüzün hassasiyetini belirlemektedir


if (ses_deger == 0) //eğer ses_deger = 0 
{
  for(i=0; i<8; i++)  //i=8 olana kadar parantez içerisinde yer alan led söndürme işlemini gerçekleştir
  {
    digitalWrite(led[i], LOW);
  }

}

else

{
  
  for(i=0; i<ses_deger; i++) //i<ses_deger olana kadar parantez içerisinde yer alan led yakma işlemini gerçekleştir
  {
    digitalWrite(led[i], HIGH);
    delayMicroseconds(2);
  }
  
  
  
  for (i=i; i<8; i++) //i=i ama i<8 küçük olana kadar parantez içerisinde yer alan led söndürme işlemini gerçekleştir
  {
    digitalWrite(led[i], LOW);  
  }
  
  
}



  
  
}
