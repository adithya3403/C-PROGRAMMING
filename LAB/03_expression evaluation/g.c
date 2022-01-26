// Write a C program to find the roots of a Quadratic equation.
#include <math.h>
#include <stdio.h>
void main() {
    int a, b, c, d, x, y;
    float r1, r2;
    printf("Enter coefficients of x^2, x and constant : ");
    scanf("%d %d %d", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d > 0) {
        printf("Roots are real. They are : \n");
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Root1 = %f\n", r1);
        printf("Root2 = %f\n", r2);
    } else if (d == 0) {
        printf("Roots are reala nd equal. They are : \n");
        r1 = -b / (2 * a);
        r2 = r1;
        printf("Root1=%f\n", r1);
        printf("Root2=%f\n", r2);
    } else {
        printf("Roots are not real. They are : \n");
        x = -b / (2 * a);
        y = sqrt(d) / (2 * a);
        printf("Root1 = %f + i%f\n", x, y);
        printf("Root2 = %f - i%f", x, y);
    }
}

// Enter coefficients of x^2, x and constant : 1 -4 4
// Roots are real and equal. They are :
// Root1 = 2.000000
// Root2 = 2.000000