#include <stdio.h>
#include <math.h>

int main() {
    int x, y;
    int radius = 10;

    for (y = -radius; y <= radius; y++) {
        for (x = -radius; x <= radius; x++) {
            if (x*x + y*y <= radius*radius)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
