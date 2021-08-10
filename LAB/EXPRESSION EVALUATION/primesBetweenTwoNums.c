// Write a C program to generate all the prime numbers between 1 and n, where n is a value supplied by the user.
#include<stdio.h>
void main() {
    int n, x;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Prime numbers between 1 to %d are : ", n);
    for(int m = 2; m <= n; m++) {
        x=0;
        for(int i = 2; i <= m/2; i++) {
            if (m % i == 0) {
                x++;
            }
        }
        if (x==0) {
            printf("%d ",m);
        }
    }
}

// Enter a number : 16
// Prime numbers between 1 to 16 are : 2 3 5 7 11 13