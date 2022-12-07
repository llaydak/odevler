#include <stdio.h>

 int i,eleman,kucuk;

float enkucuk(){
     printf("Dizinin eleman sayısını giriniz: ");
    scanf("%d", &eleman);
    printf("\n");
   float sayilar[eleman];
    for(i = 0; i < eleman; ++i)
    {
       printf("%d. sayıyı giriniz: ", i+1);
       scanf("%f", &sayilar[i]);
    }

    
    for(i = 1; i < eleman; ++i)
    {
       if(sayilar[0] > sayilar[i])
           sayilar[0] = sayilar[i];
    }
    printf("En kucuk eleman = %.2f", sayilar[0]);

    return kucuk;
}
int main(){
enkucuk();
    return 0;
}
