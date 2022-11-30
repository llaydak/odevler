#include <stdio.h>

int asalkontrol(int n);
int main()
{
    int n1, n2, i, sorun;

    printf("Küçükten büyüðe iki pozitif tamsayý giriniz: ");
    scanf("%d %d", &n1, &n2);
    printf(" %d ve %d sayýlarý arasýndaki asal sayýlar: ", n1, n2);

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
