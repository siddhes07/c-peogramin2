#include <stdio.h>
#include <limits.h>

int reverse(int x) {
    int ans = 0;
    int MAX = INT_MAX / 10;
    int MIN = INT_MIN / 10;

    while (x != 0) {
        int tmp = x % 10;

        // Check for overflow
        if (ans > MAX || ans < MIN)
            return 0;

        ans = (ans * 10) + tmp;
        x = x / 10;
    }

    return ans;
}

int main() {
    int x, result;

    printf("Enter an integer: ");
    scanf("%d", &x);

    result = reverse(x);

    printf("Reversed number: %d\n", result);

    return 0;
}
