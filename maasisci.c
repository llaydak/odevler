#include <stdio.h>
 

int zam(int maas, int oran){
	
	printf("Güncel maaþ miktarýný giriniz: \n");
    scanf("%d",&maas);
    printf("Zam oranýný giriniz(0,100): \n");
    scanf("%d",&oran);
    
    return maas + (maas * oran  / 100);

	
	
	
}



int main()
{ int son,odeme,yuzde;
 son=zam(odeme,yuzde);
    printf("Zam ile birlikte güncellenen maaþ miktarý = %d",son);
    
   
}


// Kullanýcýdan maaþýný ve zam oranýný aldýk. Yeni maaþý hesaplayýp ekrana yazdýrdýk.//
