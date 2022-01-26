#include <math.h>
#include <stdio.h>
int main() {
    double a, b, n, sum, diff, mult, div;
    printf("Enter first number : ", a);
    scanf("%lf", &a);
    printf("Enter second number : ", b);
    scanf("%lf", &b);
    printf("Select\n1 for addition\n2 for Subtraction\n3 for multiplication\n4 for division\n");
    printf("Enter choice : ", n);
    scanf("%lf", &n);
    if (n == 1) {
        printf("You selected addition\n");
        sum = a + b;
        printf("%0.2f + %0.2f = %0.2f\n", a, b, sum);

    } else if (n == 2) {
        printf("You selected subtraction\n");
        diff = a - b;
        printf("%0.2f - %0.2f = %0.2f\n", a, b, diff);

    } else if (n == 3) {
        printf("You selected multipliction\n");
        mult = a * b;
        printf("%0.2f x %0.2f = %0.2f\n", a, b, mult);

    } else if (n == 4) {
        printf("You selected division\n");
        div = a / b;
        printf("%0.2f / %0.2f = %0.2f\n", a, b, div);

    } else {
        printf("Enter number between 1 and 4 only\n");
    }

    return 0;
}
