#include<stdio.h>

long ikili(int);

int main()
{
    long bno;
    int dno;  
    printf("Ondal�k tabanda bir say� giriniz : ");
    scanf("%d",&dno);
    bno = ikili(dno);
    printf("\n Say�n�n ikili sistemdeki kar��l��� : %ld\n\n",bno);

    return 0;
}
long ikili(int dno)
{
    long bno=0,kalan,f=1;
    while(dno != 0)
    {
         kalan= dno % 2;
         bno = bno + kalan * f;
         f = f * 10;
         dno = dno / 2;
    }
    return bno;
}
