/*
case=1
input=
5
output=Enter the number whose factorial you want to calculate?                                                           
factorial of a number 5 is 120*/
#include <stdio.h>
int f(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * f(n - 1);
    }
}
void main() {
    int n;
    printf("Enter the number whose factorial you want to calculate?\n");
    scanf("%d", &n);
    printf("\nfactorial of a number %d is %d", n, f(n));
}