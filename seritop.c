#include <stdio.h>

int seritop(int x) {

	int toplam = 0;
	int i = 1;
	for(; i <= x; i++){
			
	    toplam = i + toplam;

	}

	return toplam;
}

int main()
{
     
    int x;
   
 	printf("\n Bir say� giriniz :\n"); 
	 
	scanf("%d",&x);
	
	int seritoplami = seritop(x);
	
	printf("\n x ��in seri toplam�: %d \n", seritoplami); 

	 
    return 0;
}
