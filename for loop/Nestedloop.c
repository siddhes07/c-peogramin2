#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 10; i++) {          // Outer loop for tables
        printf("Table of %d\n", i);

        for (j = 1; j <= 10; j++) {      // Inner loop for multiplication
            printf("%d x %d = %d\n", i, j, i * j);
        }

        printf("\n");   // Blank line after each table
    }

    return 0;
}
