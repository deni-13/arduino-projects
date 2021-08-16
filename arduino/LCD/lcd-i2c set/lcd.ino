//i2c adresi bulma
/*
 i2c adres programlama adresini öğrenicez 
 i2c bağlantısı SDA ve SCL pinleri kullanılarak yapılıyor.
 Örneğin; bir adet lcd ekranı i2c üzerinden bağladığımızd
 sorun olmuyor çünkü bağlantı için yeterli 
 sda ve scl var ancak 2 adet i2c bağlantısın
 kuıllanan sensör kullanmak istersek işte bu noktada
 bağlanan modüllerin adreslerini arduino kodlarında 
 belirtmemiz gerekiyor. Haliyle adresleri belirtmek için önce adresleri
 bulmak gerekiyor. 

1) i2c bağlantısını yapıyoruz.
Arduino unoda A4 –>> Sda A5–> Scl
// 0x27 ekran
 */

#include <Wire.h>


void setup() 
{
  Serial.begin(9600);
  Serial.println("i2c geliyor...");
  Wire.begin();


for (byte e=8;e<150;e++) //ekran modeline gore farklı oluyor
{
  Wire.beginTransmission(e);
  if (Wire.endTransmission()==0)
  {
    
    Serial.print("iletisim bulundu,ekrsn turu:");
    Serial.print(e,DEC);
    Serial.print(" (0x)");
    Serial.print(e,HEX);
    Serial.println(")");
  }
}
Serial.println("tamamlandi");

}
    

   
void loop()
{

}
