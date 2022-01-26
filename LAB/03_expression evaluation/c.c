// Write a program that finds if a given number is a prime number
#include <stdio.h>
void main() {
    int n, flag = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("Prime number", n);
    else
        printf("Not a prime number", n);
}

// Enter a number : 5
// Prime number