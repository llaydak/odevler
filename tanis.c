int tanis(int yas)
{
    printf("Merhaba\n");
    printf("Benim adım İlayda ve ismim 6 harfli \n");
    printf("Senin adın kaç harfli? Tuşla:");
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
