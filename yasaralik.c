/*Parametre olarak ald���m�z yas de�i�kenini fonksiyon i�erisinde kullaniciYasi adl� de�i�kene at�yoruz.
Fonksiyon i�erisinde kullaniciYasi olarak g�rd���m�z de�i�ken asl�nda main i�erisinden gelen yas de�i�keni. 
*/
void aralik(int yasgir){
     if(yasgir >= 0 && yasgir < 15){
          printf("�ocukluk d�nemindesiniz.");
     }
     else if(yasgir >= 15 && yasgir< 30){
          printf("Gen�lik d�nemindesiniz.");
     }
     else if(yasgir >= 30 && yasgir< 55){
          printf("Yeti�kinlik d�nemindesiniz.");
     }
     else if(yasgir>= 55 && yasgir < 120){
          printf("Ya�l�l�k d�nemindesiniz.");
     }
     else{
          printf("Hatal� giri� yapt�n�z.");
     }
}

int main(){
     int yas;

     printf("L�tfen ya��n�z� tu�lay�n�z. \n ");
     scanf("%d",&yas);
     aralik(yas); 
}
