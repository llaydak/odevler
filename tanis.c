#include <stdio.h>

int tanis(int yas)
{
    printf("Merhaba\n");
    printf("Benim adým Ýlayda ve ismim 6 harfli \n");
    printf("Senin adýn kaç harfli? Tuþla:");
    scanf("%d",&yas);
    return yas;
}

int main()
{
     int sayi;
     tanis(sayi);
     return 0;
}
