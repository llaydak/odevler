#include<stdio.h>

float enkucuk(float a, float b, float c);
float enbuyuk(float a, float b, float c);

int main()
{
  float n1, n2, n3;

  printf("�� tane say� giriniz: ");
  scanf("%f %f %f", &n1, &n2,  &n3);

  printf("En k���k say� = %.2f\n",enkucuk(n1,n2,n3));
  printf("En b�y�k say� = %.2f\n",enbuyuk(n1,n2,n3));

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
