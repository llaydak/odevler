#include <stdio.h>
int kontrols(int n1);
void muksayi(int stLimit, int enLimit);

int main()
{
    int minsayi, maxsayi;    
    printf(" Aralýðýn en küçük sayýsýný tuþlayýnýz : ");
    scanf("%d", &minsayi);
    printf(" Aralýðýn en büyük sayýsýný tuþlayýnýz  : ");
    scanf("%d", &maxsayi);
     
    printf("\n %d ve %d sayýlarý arasýndaki mükemmel sayýlar: \n", minsayi, maxsayi);
    muksayi(minsayi, maxsayi);
    printf("\n\n"); 
    return 0;
}

int kontrols(int n1)
{
    int i, toplam;
     
    toplam = 0;
    for(i=1; i<n1; i++)
    {
        if(n1 % i == 0)
        {
            toplam += i;
        }
    }
    if(toplam == n1)
        return 1;
    else
        return 0;
}

void muksayi(int minsayi, int maxsayi)
{
    while(minsayi <= maxsayi)
    {
        if(kontrols(minsayi))
        {
            printf(" %d  ", minsayi);
        }
        minsayi++;
    }   
}
