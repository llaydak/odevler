#include<stdio.h>

// function declaration
float daire(float r);

int main()
{
  float yaricap, alan;

  printf("Dairenin yar��ap�n� giriniz : ");
  scanf("%f", &yaricap);

  alan = daire(yaricap);
  printf("Dairenin alan�= %.2f\n",alan);

  return 0;
}

float daire(float r)
{
  float area = 3.14 * r * r;
  return area;
}
