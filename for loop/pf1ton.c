#include <stdio.h>

int main() {
    int n, i;

    // Take input from user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Loop from 1 to n
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}