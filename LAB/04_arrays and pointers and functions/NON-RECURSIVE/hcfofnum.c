#include <stdio.h>
int hcf(int x, int y) {
    int r = 1;
    while (r != 0) {
        r = x % y;
        x = y;
        y = r;
    }
    return x;
}
void main() {
    int a, b, c;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    if (a > b) {
        c = hcf(a, b);
    } else {
        c = hcf(b, a);
    }
    printf("HCF of %d and %d is %d", a, b, c);
}

// Enter two numbers : 6 22
// HCF of 6 and 22 is 2