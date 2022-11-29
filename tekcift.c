#include <stdio.h>
 
int tekcift(int n1){   
    return (n1 & 1);
}

int main()
{
    int n1;  
    printf("Bir sayý giriniz : ");
    scanf("%d", &n1);
     
	if(tekcift(n1))
    {
        printf("Girilen sayý tektir.\n\n");
    }
    else
    {
        printf("Girilen sayý çifttir.\n\n");
    }
    return 0;
}
