#include <stdio.h>

int asalkontrol(int n);
int main()
{
    int n1, n2, i, sorun;

    printf("K���kten b�y��e iki pozitif tamsay� giriniz: ");
    scanf("%d %d", &n1, &n2);
    printf(" %d ve %d say�lar� aras�ndaki asal say�lar: ", n1, n2);

    for(i=n1+1; i<n2; ++i)
    {
    
        sorun = asalkontrol(i);

        if(sorun == 1)
            printf("%d ",i);
    }
    return 0;
}

int asalkontrol(int n)
{
    int j, sorun = 1;

    for(j=2; j <= n/2; ++j)
    {
        if (n%j == 0)
        {
            sorun =0;
            break;
        }
    }
    return sorun;
}
