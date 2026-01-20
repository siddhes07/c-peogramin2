#include <stdio.h>

int main() {
    int n, i, j;
    int matrix[10][10];
    int sumRow0 = 0, prodCol1 = 1, sumAntiDiag = 0, sumMatrix = 0;

    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for (j = 0; j < n; j++) {
        sumRow0 += matrix[0][j];
    }

    
    for (i = 0; i < n; i++) {
        prodCol1 *= matrix[i][1];
    }

    
    for (i = 0; i < n; i++) {
        sumAntiDiag += matrix[i][n - i - 1];
    }

    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            sumMatrix += matrix[i][j];
        }
    }

    printf("Sum of 0th row = %d\n", sumRow0);
    printf("Product of 1st column = %d\n", prodCol1);
    printf("Sum of anti-diagonal = %d\n", sumAntiDiag);
    printf("Sum of all elements = %d\n", sumMatrix);

    return 0;
}
