

#include <stdio.h>
void katlar(int);

int main()
{
    int sayi;

    printf("Bir tamsayý giriniz: ");
    scanf("%d", &sayi);

    printf("%d sayýsýnýn katlarý:\n", sayi);
    katlar(sayi);

    return 0;
}
void katlar(int no)
{
    int i;

    for (i = 1; i <= 10; i++)
        printf("%5d\n", (no * i));
}
