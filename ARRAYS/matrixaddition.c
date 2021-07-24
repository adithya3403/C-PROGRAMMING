#include <stdio.h> 
void main() 
{ 
    int r, c; 
    int a[10][10], b[10][10], x[10][10]; 
    printf("Number of rows of matrices to be added : ");  
    scanf("%d", &r); 
    printf("Number of columns matrices to be added : ");  
    scanf("%d", &c); 
    printf("Elements of first matrix : \n"); 
    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++) 
        {
            scanf("%d", &a[i][j]); 
        }
    }
    printf("Elements of second matrix : \n"); 
    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++) 
        {
            scanf("%d", &b[i][j]); 
        }
    }
    printf("Sum of entered matrices : \n"); 
    for (int i = 0; i < r; i++) 
    { 
        for (int j = 0; j < c; j++) 
        { 
            x[i][j] = a[i][j] + b[i][j];
            printf("%d\t",x[i][j]);  
        } 
        printf("\n"); 
    } 
} 
