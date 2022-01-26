#include <conio.h>
#include <math.h>
#include <stdio.h>
/*function*/
int main() {
    long long binary = 0;
    int n, rem, i = 1, step = 1;
    printf("\nEnter decimal number : ");
    scanf("%d", &n);
    while (n != 0) {
        rem = n % 2;
        n /= 2;
        binary += rem * i;
        i *= 10;
    }
    printf("In binary : %lld\n", binary);
    return 0;
}