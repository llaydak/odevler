//doðru çalýþmýyor//  
  
  
  #include <stdio.h>

long kmdenm(long km, long m){
	
	printf("Mesafeyi kilometre cinsinden giriniz: ");
    scanf("%d", &km);

     m = km * 1000;
	
	 return m;
	
}

int main()
{
 long kilom,met,cevir;

 cevir=kmdenm(kilom, met);

 printf("%d Kilometre = %d Metre", kilom, met);

 return 0;
}
