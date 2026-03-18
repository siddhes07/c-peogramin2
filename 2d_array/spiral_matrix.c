#include <stdio.h>

int main() {
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9,10,11,12},
        {13,14,15,16}
    };

    int top = 0, bottom = 3;
    int left = 0, right = 3;

    printf("Spiral Order:\n");

    while (top <= bottom && left <= right) {

        // Left → Right
        for (int i = left; i <= right; i++) {
            printf("%d ", arr[top][i]);
        }
        top++;

        // Top → Bottom
        for (int i = top; i <= bottom; i++) {
            printf("%d ", arr[i][right]);
        }
        right--;

        // Right → Left
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                printf("%d ", arr[bottom][i]);
            }
            bottom--;
        }

        // Bottom → Top
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                printf("%d ", arr[i][left]);
            }
            left++;
        }
    }

    return 0;
}