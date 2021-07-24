#include <stdio.h>
int multiply(int r1,int r2,int c1,int c2)
{
    int a[10][10], b[10][10], c[10][10];
    for (int i=0; i<r1; i++) 
    {
        for (int j=0; j<c1; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i=0; i<r2; i++) 
    {
        for (int j=0; j<r2; j++) 
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (int i=0; i<r1; i++) 
    {
        for (int j=0; j<c2; j++) 
        {
            c[i][j]=0;
            for (int k=0; k<r2; k++) 
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("On multiplying both matrices, we get : ");
    for (int i=0; i<r1; i++) 
    {
        printf("\n");
        for (int j=0; j<c2; j++) 
        {
            printf("%3d ", c[i][j]);
        }
    }
    return 0;
}
int main() 
{
    int r1, r2, c1, c2;
    printf("Enter number of rows and columns in first matrix : ");
    scanf("%d %d", &r1, &c1);
    printf("Enter number of rows and columns in second matrix : ");
    scanf("%d %d", &r2, &c2);
    if(r2 == c1) 
    {
        multiply(r1, r2, c1, c2);
    }
    else 
    {
        printf("Multiplication cannot be done\nBecause number of columns in first matrix is not equal to number of rows in second matrix\n");
    }
    return 0;
}