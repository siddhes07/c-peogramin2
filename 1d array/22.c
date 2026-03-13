#include <stdio.h>

int main() {
    int i = 1;

    // Using while loop
    printf("Using while loop:\n");
    while (i <= 10) {
        printf("%d ", i);
        i++;
    }

    printf("\n");

    // Using for loop
    printf("Using for loop:\n");
    for (int j = 1; j <= 10; j++) {
        printf("%d ", j);
    }

    printf("\n");
    return 0;
}
