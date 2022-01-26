// Write a C program that uses functions to perform the following: Addition of Two Matrices
#include <stdio.h>
void main() {
    int r, c;
    int A[10][10], B[10][10], C[10][10];
    printf("Enter number of rows : ");
    scanf("%d", &r);
    printf("Enter number of columns : ");
    scanf("%d", &c);
    printf("Enter elements of first matrix : ");
    for (int i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements of second matrix : ");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("On adding both the matrices, we get : \n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}

// Enter number of rows : 2
// Enter number of columns : 2
// Enter elements of first matrix : 1 2 3 4
// Enter elements of second matrix : 5 6 7 8
// Sum of entered matrices :
// 6 8
// 10 12