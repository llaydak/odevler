/* kullan�c�n�n girece�i 5 ��renci i�in (for kullanabilirim belki) vize ve final bilgilerini ge�ici haf�zada tutan

vize final ayr� diziler - mainde yapabilirsin */


#include <stdio.h>
int*ortalama (int s);

int main(){
	
	static int vize[5];
    static int final[5];
	int i,id, *ip;
	
	for(i=0;i<5;i++){
		
		printf("%d. ��rencinin vize notunu giriniz.\n",i+1);
		scanf("%f", &vize[i]);
		printf("%d. ��rencinin final notunu giriniz.\n", i+1);
		scanf("%f", &final[i]);	

		}
	
		for (id=0; id<5; id++) vize[id]=id+1;
        ip = ortalama(vize);
	
     	for (id=0; id<5; id++) final[id]=id+1;
        ip = ortalama(final);
	
	return 0;
}


/*ortalama dizisi i�in ayr�ca fonksiyon ve return et


dizi return etmeyi ��ren*/

int *ortalama(int s)
{
	int i, ort;
	static int arr[5];
	int sum=0;
	s=5;
  for(i = 0; i < 5; i++)
  
          sum += arr[i];
          printf("Notlar�n toplam� = %d\n",sum);
    ort= sum/5;
    printf("Notlar�n ortalamas�= %d\n", ort);
    return ort;
}
