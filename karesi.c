#include <stdio.h>

int kare(int no){
    return (no * no);
}
int main()
{
    int sayi;
    int son;	
     
    printf("Karesini hesaplatmak için sayý giriniz: ");
    scanf("%d", &sayi);
    son= kare(sayi);
    printf("Girilen %d sayýsýnýn karesi : %d\n", sayi, son); 
    return 0;
}
