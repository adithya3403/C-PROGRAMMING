#include <math.h>
#include <stdio.h>
int main() {
    double n, result;
    printf("Enter number : ");
    scanf("%lf", &n);
    result = sqrt(n);
    printf("Square root of %0.2lf = %0.2lf\n", n, result);
    return 0;
}