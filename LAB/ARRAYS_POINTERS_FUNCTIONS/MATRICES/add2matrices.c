// Write a C program that uses functions to perform the following: Addition of Two Matrices
#include <stdio.h>
int main()
{
    int rowCount, columnCount, i, j;
    int firstMatrix[10][10], secondMatrix[10][10], resultMatrix[10][10];
    printf("Number of rows of matrices to be added : ");
    scanf("%d", &rowCount);
    printf("Number of columns matrices to be added : ");
    scanf("%d", &columnCount);
    printf("Elements of first matrix : \n");
    for (i = 0; i < rowCount; i++)
        for (j = 0; j < columnCount; j++)
            scanf("%d", &firstMatrix[i][j]);
    printf("Elements of second matrix : \n");
    for (i = 0; i < rowCount; i++)
        for (j = 0; j < columnCount; j++)
            scanf("%d", &secondMatrix[i][j]);
    printf("Sum of entered matrices : \n");
    for (i = 0; i < rowCount; i++)
    {
        for (j = 0; j < columnCount; j++)
        {
            resultMatrix[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
            printf("%d\t",resultMatrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// Number of rows of matrices to be added : 2
// Number of columns matrices to be added : 2
// Elements of first matrix : 
// 1 2 3 4
// Elements of second matrix : 
// 5 6 7 8
// Sum of entered matrices :
// 6       8
// 10      12