#include <stdio.h>
int main() {
    double f, s, t;
    printf("Enter first number:");
    scanf("%lf", &f);
    printf("Enter second number:");
    scanf("%lf", &s);
    t=f;
    f=s;
    s=t;
    printf("After swapping, first number = %0.2lf", f);
    printf("\nAfter swapping, second number = %0.2lf\n", s);
    return 0;
}