//b�l�m kalan bulma//

#include <stdio.h>

float bolme(int bolunen, int bolen, float bolum){
	
	
    printf("B�l�necek say�y� giriniz: \n");
    scanf("%d", &bolunen);
    printf("B�len say�y� giriniz: \n ");
    scanf("%d", &bolen);
 
    bolum=bolunen/bolen;
 
	
}


int kal(int bolunen, int bolen,int kalan){
	
	 kalan=bolunen%bolen;
	

}




int main() {
   

  int boldu, kaldi,bol,boldur,bul,art;
  
  boldu=bolme(bol,boldur,bul);
  kaldi=kal(bol,boldur,art);
  
  printf("B�l�m ve kalan = %d %d", boldu,kaldi);
  	
  	return 0;
  }
 
