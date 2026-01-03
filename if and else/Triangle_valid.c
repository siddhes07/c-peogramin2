#include <stdio.h>

int main() {
    float a, b, c;

    
    printf("Enter three positive numbers (sides of triangle): ");
    scanf("%f %f %f", &a, &b, &c);

    
    if (a + b > c && a + c > b && b + c > a) 
        if (a == b && b == c) {
            printf("The triangle is Equilateral.");
        }
        else if (a == b || a == c || b == c) {
            printf("The triangle is Isosceles.");
        }
        else {
            printf("The triangle is Scalene.");
        }

    } else {
        printf("The given sides do NOT form a valid triangle.");
    }

    return 0;
}
