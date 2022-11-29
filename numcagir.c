#include <stdio.h>


int merhabade(int girno) {
  
  printf("Numaranýzý giriniz. \n");
  scanf("%d", &girno);
  printf("Merhaba sayýn numara %d\n", girno);
  girno ++; 
  return girno;
}
  
  
int main() {    
  int a;
  for (; a<= 5; a++) { merhabade(a);}
   return 0;}

