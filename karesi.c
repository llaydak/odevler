#include <stdio.h>

int kare(int no){
    return (no * no);
}
int main()
{
    int sayi;
    int son;	
     
    printf("Karesini hesaplatmak i�in say� giriniz: ");
    scanf("%d", &sayi);
    son= kare(sayi);
    printf("Girilen %d say�s�n�n karesi : %d\n", sayi, son); 
    return 0;
}
