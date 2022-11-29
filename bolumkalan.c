//bölüm kalan bulma,son hali ekrana yazdırmıyor//

#include <stdio.h>

float bolme(int bolunen, int bolen, float bolum){
	
	
    printf("Bölünecek sayıyı giriniz: \n");
    scanf("%d", &bolunen);
    printf("Bölen sayıyı giriniz: \n ");
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
 
