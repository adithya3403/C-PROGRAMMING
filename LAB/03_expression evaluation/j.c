// Write a C program to read in two numbers x and n and then compute sum of their geometric progressions
#include <math.h>
#include <stdio.h>
void main() {
    int n, x, sum = 0;
    printf("Enter limit : ");
    scanf("%d", &n);
    printf("Enter value of x : ");
    scanf("%d", &x);
    if (x < 0 || n < 0) {
        printf("Error!");
    } else {
        for (int i = 0; i < n; i++) {
            sum = sum + pow(x, i);
        }
    }
    printf("Sum = %d\n", sum);
}

// Enter limit : 4
// Enter value of x : 3
// Sum = 40