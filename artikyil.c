
#include <stdio.h>


int artik(int sene){
	
	if (sene % 400 == 0) {
      printf("%d bir art�k y�l.", sene);
   }
 
   else if (sene % 100 == 0) {
      printf("%d art�k y�l de�il.", sene);
   }
 
   else if (sene % 4 == 0) {
      printf("%d bir art�k y�l.", sene);
   }
 
   else {
      printf("%d art�k y�l de�il.", sene);
   }
 
   return 0;
	
	
	
}




int main() {
   int yil, sonuc;
   
   
   printf("Y�l Girin: ");
   scanf("%d", &yil);
   
 
   sonuc= artik(yil);
   
   return 0;
}
 
