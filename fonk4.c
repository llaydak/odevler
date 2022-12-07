#include <stdio.h>
int eleman,i;
float enbuyukiki,max1,max2;
int ikincienbuyuk(){

   printf("Toplam eleman sayisini girin: ");
    scanf("%d", &eleman);
    printf("\n");
   float sayilar[eleman];
    for(i = 0; i < eleman; ++i)
    {
       printf("%d. sayiyi giriniz: ", i+1);
       scanf("%f", &sayilar[i]);
    }
      if(sayilar[0]>sayilar[1]){
      max1=sayilar[0];
      max2=sayilar[1];
      }
      else{
        max1=sayilar[1];
        max2=sayilar[0];
      }
  
    for(i=2;i<eleman;++i){
      if(sayilar[i]>sayilar[1]){
        max1=max2;
        max1=sayilar[i];
      }
      else if(sayilar[i]>max2 && max1<sayilar[i])
      max2=sayilar[i];


    }
    printf("%.2f", max2);
  return enbuyukiki;
}

int main(){
  ikincienbuyuk();

  return 0;


}