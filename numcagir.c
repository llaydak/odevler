#include <stdio.h>


int merhabade(int girno) {
  
  printf("Numaran�z� giriniz. \n");
  scanf("%d", &girno);
  printf("Merhaba say�n numara %d\n", girno);
  girno ++; 
  return girno;
}
  
  
int main() {    
  int a;
  for (; a<= 5; a++) { merhabade(a);}
   return 0;}

