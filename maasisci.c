#include <stdio.h>
 

int zam(int maas, int oran){
	
	printf("G�ncel maa� miktar�n� giriniz: \n");
    scanf("%d",&maas);
    printf("Zam oran�n� giriniz(0,100): \n");
    scanf("%d",&oran);
    
    return maas + (maas * oran  / 100);

	
	
	
}



int main()
{ int son,odeme,yuzde;
 son=zam(odeme,yuzde);
    printf("Zam ile birlikte g�ncellenen maa� miktar� = %d",son);
    
   
}


// Kullan�c�dan maa��n� ve zam oran�n� ald�k. Yeni maa�� hesaplay�p ekrana yazd�rd�k.//
