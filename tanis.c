int tanis(int yas)
{
    printf("Merhaba\n");
    printf("Benim ad�m �layda ve ismim 6 harfli \n");
    printf("Senin ad�n ka� harfli? Tu�la:");
    scanf("%d",&yas);
    return yas;
    /* There is no return statement inside this function, since its
     * return type is void
     */
}

int main()
{
     int sayi;
     tanis(sayi);
     return 0;
}
