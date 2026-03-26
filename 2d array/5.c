#include <stdio.h>

int main() {
    int arr[3][3];
    int i, j;

    printf("Enter elements:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Diagonal elements are:\n");
    for(i = 0; i < 3; i++) {
        printf("%d ", arr[i][i]);
    }

    return 0;
}
