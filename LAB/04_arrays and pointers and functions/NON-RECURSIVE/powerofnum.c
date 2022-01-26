#include <stdio.h>
int power(int b, int e) {
    int r = 1;
    for (e; e > 0; e--)
        r *= b;
    return r;
}
void main() {
    int b, e;
    printf("Enter base : ");
    scanf("%d", &b);
    printf("Enter power : ");
    scanf("%d", &e);
    int res = power(b, e);
    printf("%d^%d = %d", b, e, res);
}

// Enter base : 5
// Enter power : 3
// 5^3 = 125