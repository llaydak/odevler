
#include <stdio.h>


int artik(int sene){
	
	if (sene % 400 == 0) {
      printf("%d bir artık yıl.", sene);
   }
 
   else if (sene % 100 == 0) {
      printf("%d artık yıl değil.", sene);
   }
 
   else if (sene % 4 == 0) {
      printf("%d bir artık yıl.", sene);
   }
 
   else {
      printf("%d artık yıl değil.", sene);
   }
 
   return 0;
	
	
	
}




int main() {
   int yil, sonuc;
   
   
   printf("Yıl Girin: ");
   scanf("%d", &yil);
   
 
   sonuc= artik(yil);
   
   return 0;
}
 
