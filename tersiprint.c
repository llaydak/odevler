// program to find sum of individual digits and printing the reverse numbers using  //user define function prototype style.
#include <stdio.h>
// function declaration in without parameters and without return values function prototype style
void top(void);
// function declaration in without parameters and with return values function prototype  style
int ters(void);
int n;
void top (void) // function body
{
    int s=0,r;
    int m=n;
    while(m>0)
    {
        r= m%10;
        s= s+r;
        m=m/10;
    }
    printf(" \n %d sayýsýnýn rakamlarýnýn toplamý= %d",n, s);
}
int ters(void) // function body
{
    int r=0,re=0;
    int m=n;
    while(m>0)
    {
        r=m%10;
        re=re*10+r;
        m=m/10;
    }
    return re;
}
int main() {
    int a;
    printf("\n n deðerini giriniz: ");
    scanf("%d", &n);
    a=ters();
    top();
    printf(" \n Girilen sayýnýn tersi= %d", a);
    return 0;
}
