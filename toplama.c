#include <stdio.h>
int ekle(int x, int y);  

int main()
{
    int no1,no2,toplam;

    printf("Ýki sayý giriniz: ");
    scanf("%d %d",&no1,&no2);

    toplam = ekle(no1, no2);  
    printf("toplam = %d",toplam);

    return 0;
}

int ekle(int x, int y)  
{
    int sonuc;
    sonuc= x+y;
    return sonuc;            
}
