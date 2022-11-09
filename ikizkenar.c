#include <stdio.h>

int main() {


 int x, y, b;
        for (x = 0; x < 6; x++) {
            for (b = 11; b > x + 1; b--) {
                printf(" ");
            }
            for (y = 0; y < x + 1; y++) {
                printf(" * ");
            }
            printf("\n");
        }
        
return 0;
}