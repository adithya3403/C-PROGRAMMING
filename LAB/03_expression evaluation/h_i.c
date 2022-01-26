// Write a C program to calculate the following where x is a factorial value and written as 1-x/2+x^2/4-x^3/6
#include <math.h>
#include <stdio.h>
void main() {
    int a, b;
    float x, r;
    printf("Enter a fractional value:\n");
    printf("Enter numerator value : ");
    scanf("%d", &a);
    printf("Enter denominator value : ");
    scanf("%d", &b);
    if (b == 0) {
        printf("Invalid value!");
    } else {
        x = a / b;
        r = 1 - x / 2 + (x * x) / 4 - (x * x * x) / 6;
        printf("Result = %f\n", r);
    }
}

// Enter a fractional value:
// Enter numerator value : 3
// Enter denominator value : 2
// Result = 0.583333