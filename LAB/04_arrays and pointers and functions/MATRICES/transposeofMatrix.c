#include <stdio.h>
void main() {
    int a[5][5], b[5][5], m, n;
    printf("Enter number of rows and columns in matrix : ");
    scanf("%d %d", &m, &n);
    printf("Enter entries of matrix : ");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            b[j][i]=a[i][j];
        }
    }
    printf("Transpose of matrix is :\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
}

// Enter number of rows and columns in matrix : 2 2
// Enter entries of matrix : 1 2 3 
// 4
// Transpose of matrix is :
// 1 3 
// 2 4