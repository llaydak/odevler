#include<stdio.h>

#define PI 3.141592

int cevr(float yaricap){
	
    float cevre;
	printf("Dairenin yar��ap�n� giriniz: ");
	scanf("%f", &yaricap);
	cevre = 2*PI*yaricap;
	printf("Dairenin �evre uzunlu�u = %f",cevre);
}

int main()
{ int sonuc,sayi;
 sonuc=cevr(sayi);

	
	getch(); 
	
	return 0;
}


