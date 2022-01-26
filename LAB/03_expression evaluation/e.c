// A Fibonacci sequence is defined as follows: the first and second terms in the sequence are 0 and 1. Subsequent terms are found by adding the preceding two terms in the sequence. Write a C program to generate the first n terms of the sequence.
#include <stdio.h>
void main() {
    int n, n1 = 0, n2 = 1, nt;
    printf("Enter number of terms : ");
    scanf("%d", &n);
    printf("Fibonacci Series is : ");
    for (int i = 1; i <= n; ++i) {
        printf("%d, ", n1);
        nt = n1 + n2;
        n1 = n2;
        n2 = nt;
    }
}

// Enter number of terms : 10
// Fibonacci Series is : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34,