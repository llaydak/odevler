//bölüm kalan bulma//

#include <stdio.h>

float bolme(int bolunen, int bolen, float bolum){
	
	
    printf("Bölünecek sayýyý giriniz: \n");
    scanf("%d", &bolunen);
    printf("Bölen sayýyý giriniz: \n ");
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
  
  printf("Bölüm ve kalan = %d %d", boldu,kaldi);
  	
  	return 0;
  }
 
