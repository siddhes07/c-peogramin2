#include <stdio.h>

int main() {
    int n, i, j;
    int matrix[50][50];
    int largest, smallest;
    int diagLargest;

   
    printf("Enter the dimension n: ");
    scanf("%d", &n);

    
    printf("Enter %d x %d matrix elements:\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    largest = smallest = matrix[0][0];
    diagLargest = matrix[0][0];

    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {

            
            if (matrix[i][j] > largest)
                largest = matrix[i][j];

            
            if (matrix[i][j] < smallest)
                smallest = matrix[i][j];

            
            if (i == j && matrix[i][j] > diagLargest)
                diagLargest = matrix[i][j];
        }
    }

    printf("\nLargest element in matrix: %d", largest);
    printf("\nSmallest element in matrix: %d", smallest);
    printf("\nLargest element on diagonal: %d", diagLargest);

    return 0;
}
