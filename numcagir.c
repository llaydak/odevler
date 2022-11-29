#include <stdio.h>
void selamla() {
  static int sayigiris = 1;
  printf("Merhaba sayın numara %d\n", sayigiris);
  sayigiris ++; }

int main() {    
  int i;
  for (i = 0; i < 11; i++) { selamla();}
   return 0;}

