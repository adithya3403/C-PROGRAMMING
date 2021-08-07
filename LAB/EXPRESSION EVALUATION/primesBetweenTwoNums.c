// Write a C program to generate all the prime numbers between 1 and n, where n is a value supplied by the user.
#include<stdio.h>
void main() {
    int m,n,i,nof;
    printf("\nEnter a number:");
    scanf("%d",&n);
    printf("\nThe Prime numbers between 1 to n:");
    for(m=2;m<=n;m++) {
        nof=0;
        for(i=2;i<=m/2;i++) {
            if(m%i==0) {
                nof++;
            }
        }
        if(nof==0) {
            printf("\t%d",m);
        }
    }
}

// Enter a number:16

// The Prime numbers between 1 to n:       2       3     57       11      13