#include<stdio.h>
int asal(int a)
{
   int i, sayi=0;

   for(i=2;i<=a/2;i++)
   {
       if(a%i==0)
          sayi++;
   }

   if(sayi==0)
       return 0;
   else
       return 1;
}



int main()
{
   int n, j, sayi;

   printf("Bir sayý girin: ");
   scanf("%d",&n);

   for(j=2;j<=n/2;j++)
   {
       if(asal(j)==0)
       {          
          if(asal(n-j)==0)
          {
             printf(" %d + %d = %d\n", j, n-j, n);
             sayi=0;
          }
       }
   }

   if(sayi==1)
       printf("Bu sayý iki asal sayýnýn toplamý þeklinde yazýlamaz. \n");

   return 0;
}


