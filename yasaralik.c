/*Parametre olarak aldýðýmýz yas deðiþkenini fonksiyon içerisinde kullaniciYasi adlý deðiþkene atýyoruz.
Fonksiyon içerisinde kullaniciYasi olarak gördüðümüz deðiþken aslýnda main içerisinden gelen yas deðiþkeni. 
*/
void aralik(int yasgir){
     if(yasgir >= 0 && yasgir < 15){
          printf("Çocukluk dönemindesiniz.");
     }
     else if(yasgir >= 15 && yasgir< 30){
          printf("Gençlik dönemindesiniz.");
     }
     else if(yasgir >= 30 && yasgir< 55){
          printf("Yetiþkinlik dönemindesiniz.");
     }
     else if(yasgir>= 55 && yasgir < 120){
          printf("Yaþlýlýk dönemindesiniz.");
     }
     else{
          printf("Hatalý giriþ yaptýnýz.");
     }
}

int main(){
     int yas;

     printf("Lütfen yaþýnýzý tuþlayýnýz. \n ");
     scanf("%d",&yas);
     aralik(yas); 
}
