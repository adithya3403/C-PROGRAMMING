#include <stdio.h> 
void main()
{ 
    int r1, c1, r2, c2, sum = 0;  
    int a[10][10], b[10][10], x[10][10]; 
    printf("Number of rows in first matrix : "); 
    scanf("%d", &r1); 
    printf("Number of columns in first matrix : "); 
    scanf("%d", &c1); 
    printf("Elements of first matrix : \n"); 
    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c1; j++) 
        {
            scanf("%d", &a[i][j]); 
        }
    }
    printf("Number of rows of second matrix : "); 
    scanf("%d", &r2); 
    printf("Number of columns of second matrix : "); 
    scanf("%d", &c2); 
    if (c1 != r2) 
    {
        printf("Matrices with entered orders cannot be multiplied.\n"); 
    }
    else 
    { 
        printf("Elements of second matrix : \n"); 
        for (int i = 0; i < r2; i++) 
        {
            for (int j = 0; j < c2; j++) 
            {
                scanf("%d", &b[i][j]);
            }
        }
        for (int i = 0; i < r1; i++) 
        { 
            for (int j = 0; j < c2; j++) 
            {  
                for (int k = 0; k < r2; k++) 
                { 
                    sum = sum + a[i][k]*b[k][j];  
                } 
                x[i][j] = sum; 
                sum = 0; 
            } 
        } 
        printf("After Multiplication, the result is : \n"); 
        for (int i = 0; i < r1; i++) 
        { 
            for (int j = 0; j < c2; j++) 
            {
                printf("%d\t", x[i][j]); 
            }
            printf("\n"); 
        } 
    } 
} 

// input
// Number of rows in first matrix : 2
// Number of columns in first matrix : 2
// Elements of first matrix : 
// 1 2 3 4 
// Number of rows of second matrix : 2
// Number of columns of second matrix : 2
// Elements of second matrix : 
// 5 6 7 8
// output
// After Multiplication, the result is : 
// 19      22
// 43      50