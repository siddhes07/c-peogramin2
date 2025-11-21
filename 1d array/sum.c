#include <stdio.h>

int main() {
    int rows, cols;
    
    // Ask for size of the 2D array
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    int arr[rows][cols];  // Declare 2D array

    // Input elements
    printf("Enter elements of the 2D array:\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    // Print 2D array
    printf("The 2D array is:\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Sum of all elements
    int sum = 0;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            sum += arr[i][j];
        }
    }
    printf("Sum of all elements = %d\n", sum);

    return 0;
}

