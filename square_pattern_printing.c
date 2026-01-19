#include <stdio.h>

int main() {
    int i = 1, j, n;

    printf("Enter size of square: ");
    scanf("%d", &n);

    while (i <= n) {
        j = 1;
        while (j <= n) {
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
