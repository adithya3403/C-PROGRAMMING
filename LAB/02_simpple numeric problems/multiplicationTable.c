// Write a program that prints a multiplication table for a given number and the number of rows in the table. For example, for a number 5 and rows = 3, the output should be: 
// 5 x 1 = 5
// 5 x 2 = 10 
// 5 x 3 = 15
#include <stdio.h>
#include<conio.h>
void main() {
    int n, i, rows;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Enter number of rows : ");
    scanf("%d", &rows);
    for(int i = 1; i <= rows; i++) {
        printf("%d * %d = %d\n",n,i, n*i);
    }
}

// Enter a number : 7
// Enter number of rows : 11
// 7 * 1 = 7 
// 7 * 2 = 14
// 7 * 3 = 21
// 7 * 4 = 28
// 7 * 5 = 35
// 7 * 6 = 42
// 7 * 7 = 49
// 7 * 8 = 56
// 7 * 9 = 63
// 7 * 10 = 70
// 7 * 11 = 77