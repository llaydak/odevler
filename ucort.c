#include <stdio.h>

int orthesap(int ilk, int orta, int son){


    int sonuc;
    float ortalama;
    
    printf("�Lk say�y� giriniz = ");
    scanf("%d",&ilk);

    printf("�kinci say�y� giriniz = ");
    scanf("%d",&orta);

    printf("���nc� say�y� giriniz = ");
    scanf("%d",&son);
    
    sonuc=ilk+orta+son;

   



}



int main(){   



    int sayi1, sayi2, sayi3, bitis;
    float ort;
    
    bitis=orthesap(sayi1, sayi2, sayi3);
    ort = bitis/3;

    printf("\n Girilen say�lar�n toplam�= %d",bitis); 
    printf("\n Girilen say�lar�n ortalamas�= %.1f\n",ort);
    
    return 0;
}
