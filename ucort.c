#include <stdio.h>

int orthesap(int ilk, int orta, int son){


    int sonuc;
    float ortalama;
    
    printf("ÝLk sayýyý giriniz = ");
    scanf("%d",&ilk);

    printf("Ýkinci sayýyý giriniz = ");
    scanf("%d",&orta);

    printf("Üçüncü sayýyý giriniz = ");
    scanf("%d",&son);
    
    sonuc=ilk+orta+son;

   



}



int main(){   



    int sayi1, sayi2, sayi3, bitis;
    float ort;
    
    bitis=orthesap(sayi1, sayi2, sayi3);
    ort = bitis/3;

    printf("\n Girilen sayýlarýn toplamý= %d",bitis); 
    printf("\n Girilen sayýlarýn ortalamasý= %.1f\n",ort);
    
    return 0;
}
