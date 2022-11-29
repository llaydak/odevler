#include<stdio.h>
int large(int a, int b); // function declaration
int  main( )
{
	int c, d,sonuc;
	printf("c, d değerleri için iki sayı giriniz.");
	scanf("%d %d", &c,&d);
	sonuc= large(c, d); // function calling.
	printf(" %d ve %d arasında en büyük sayı= %d", c, d, sonuc);
return 0;
}
int large(int a, int b) // function body 
{
	if(a>b)
	
		return a;
	else 
            return b;
}
