#include<stdio.h>
int large(int a, int b); // function declaration
int  main( )
{
	int c, d,sonuc;
	printf("c, d de�erleri i�in iki say� giriniz.");
	scanf("%d %d", &c,&d);
	sonuc= large(c, d); // function calling.
	printf(" %d ve %d aras�nda en b�y�k say�= %d", c, d, sonuc);
return 0;
}
int large(int a, int b) // function body 
{
	if(a>b)
	
		return a;
	else 
            return b;
}
