#include <stdio.h>
 
int tekcift(int n1){   
    return (n1 & 1);
}

int main()
{
    int n1;  
    printf("Bir say� giriniz : ");
    scanf("%d", &n1);
     
	if(tekcift(n1))
    {
        printf("Girilen say� tektir.\n\n");
    }
    else
    {
        printf("Girilen say� �ifttir.\n\n");
    }
    return 0;
}
