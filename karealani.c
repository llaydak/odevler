#include<stdio.h>
 
float kare(float x); 
 
int main() {
    float kenar;
    float alan;
    printf("Kenar uzunluğunu giriniz. n");
    scanf("%f", &kenar);
    alan = kare(kenar);
 
    printf("Bir kenarı %f olan karenin alani = %.2f'dir\n", kenar, alan);
 
    return 0;
}
 
float kare(float x) {
    return x * x;
}

