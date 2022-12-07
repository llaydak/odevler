#include <stdio.h>

float ref;
int i,eleman,sayi;

int kacKez(){
    
 printf("Dizinin eleman sayısını giriniz: ");
    scanf("%d", &eleman);
    printf("\n");
   float sayilar[eleman];
    for(i = 0; i < eleman; ++i)
    {
       printf("%d. sayıyı giriniz: ", i+1);
       scanf("%f", &sayilar[i]);
    }
    printf("\n Dizide hangi sayının kaç defa geçtiğin öğrenmek istiyorsunuz: ");
    scanf("%f", &ref);
    sayi=0;

    for(i=0;i<eleman;++i){
        if(ref==sayilar[i])
            sayi++;
    }
    printf("%.2f sayınız bu dizide %d defa var.", ref,sayi);
}
    int main(){
        kacKez();
        return 0;
    }
