#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j;
    int *arr;
    int pos = 0, neg = 0, zero = 0;

    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    
    arr = (int *)malloc(n * sizeof(int));

    
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // Count positive, negative, zero
        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
        else
            zero++;
    }

    
    printf("\nPositive numbers: %d", pos);
    printf("\nNegative numbers: %d", neg);
    printf("\nZero values: %d\n", zero);

   
    printf("\nPairs with positive sum:\n");
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] > 0) {
                printf("(%d, %d)\n", arr[i], arr[j]);
            }
        }
    }

    
    free(arr);

    return 0;
}
