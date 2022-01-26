#include <math.h>
#include <stdio.h>
int main() {
    double a, b, c, s, area;
    printf("Enter length of each side of triangle in increasing order : ", a, b, c);
    scanf("%lf %lf %lf", &a, &b, &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area of triangle is %0.2f sq. units", area);
    return 0;
}
