#include <stdio.h>

int main() {
    int i, j, space;
    int rows = 5;

    for (i = rows; i >= 1; i--) {
        
        for (space = 0; space < rows - i; space++) {
            printf(" ");
        }
        
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
