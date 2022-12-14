/* kullanýcýnýn gireceði 5 öðrenci için (for kullanabilirim belki) vize ve final bilgilerini geçici hafýzada tutan

vize final ayrý diziler - mainde yapabilirsin */


#include <stdio.h>
int*ortalama (int s);

int main(){
	
	static int vize[5];
    static int final[5];
	int i,id, *ip;
	
	for(i=0;i<5;i++){
		
		printf("%d. öðrencinin vize notunu giriniz.\n",i+1);
		scanf("%f", &vize[i]);
		printf("%d. öðrencinin final notunu giriniz.\n", i+1);
		scanf("%f", &final[i]);	

		}
	
		for (id=0; id<5; id++) vize[id]=id+1;
        ip = ortalama(vize);
	
     	for (id=0; id<5; id++) final[id]=id+1;
        ip = ortalama(final);
	
	return 0;
}


/*ortalama dizisi için ayrýca fonksiyon ve return et


dizi return etmeyi öðren*/

int *ortalama(int s)
{
	int i, ort;
	static int arr[5];
	int sum=0;
	s=5;
  for(i = 0; i < 5; i++)
  
          sum += arr[i];
          printf("Notlarýn toplamý = %d\n",sum);
    ort= sum/5;
    printf("Notlarýn ortalamasý= %d\n", ort);
    return ort;
}
