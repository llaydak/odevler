#include <stdio.h>
int kontrols(int n1);
void muksayi(int stLimit, int enLimit);

int main()
{
    int minsayi, maxsayi;    
    printf(" Aral���n en k���k say�s�n� tu�lay�n�z : ");
    scanf("%d", &minsayi);
    printf(" Aral���n en b�y�k say�s�n� tu�lay�n�z  : ");
    scanf("%d", &maxsayi);
     
    printf("\n %d ve %d say�lar� aras�ndaki m�kemmel say�lar: \n", minsayi, maxsayi);
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
