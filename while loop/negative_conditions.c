#include <stdio.h>

int main() {
    int n, i = -1;

    printf("Enter a negative integer: ");
    scanf("%d", &n);

    while (i >= n) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d: Epic Combo!\n", i);
        }
        else if (i % 2 == 0 && i % 3 == 0) {
            printf("%d: FizzTwos!\n", i);
        }
        else if (i % 5 == 0) {
            printf("%d: Buzz Deep!\n", i);
        }
        else if (i % 3 == 0) {
            printf("%d: Fizz\n", i);
        }
        else {
            printf("%d: Chill\n", i);
        }
        i--;
    }

    return 0;
}
