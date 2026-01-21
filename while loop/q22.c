#include <stdio.h>

int main() {
    int n, i = 1, j;
    printf("n टाका: ");
    scanf("%d", &n);

    while(i <= n) {
        j = 1;
        while(j <= n - i + 1) {
            printf("%d ", j);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
