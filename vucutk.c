#include <stdio.h>
int main() {

 float kutle, boy, indeks;
 printf("Kilonuzu giriniz.");
 scanf("%f", &kutle);
 printf("Boyunuzu giriniz.");
 scanf("%f", &boy);
 indeks=kutle/(boy*boy);
 printf("Vücut kitle endeksiniz=%f\n", indeks);

if(indeks<=18.49)
  printf("İdeal kilonuzun altındasınız, doktora başvurmanız önerilir. ");
  
else if(18,50<=indeks<=24.99)
  printf("İdeal kilonuzdasınız, formunuzu koruyun.");
  
else if(25<=indeks<=29.99)
   printf("İdeal kilonuzun üzerindesiniz, dikkatli beslenmeli ve düzenli spor yapmalısınız.");
   
else if(indeks>=30)
	printf("İdeal kilonuzun çok üzerindesiniz, en kısa zamanda doktora başvurmanız önemle önerilir.");
	
else


return 0;
}