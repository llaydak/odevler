#include<stdio.h>

float enkucuk(float a, float b, float c);
float enbuyuk(float a, float b, float c);

int main()
{
  float n1, n2, n3;

  printf("Üç tane sayý giriniz: ");
  scanf("%f %f %f", &n1, &n2,  &n3);

  printf("En küçük sayý = %.2f\n",enkucuk(n1,n2,n3));
  printf("En büyük sayý = %.2f\n",enbuyuk(n1,n2,n3));

  return 0;
}
float enkucuk(float a, float b, float c)
{
  if(a<=b && a<=c) return a;
  else if(b<=a && b<=c) return b;
  else return c;
}

float enbuyuk(float a, float b, float c)
{
  if(a>=b && a>=c) return a;
  else if(b>=a && b>=c) return b;
  else return c;
}
