#include <stdio.h>
int main() {
    int a[10][10], b[10][10], c[10][10], r1, c1, r2, c2;
    printf("Enter number of rows and columns in first matrix : ");
    scanf("%d %d",&r1, &c1);
    printf("Enter number of rows and columns in second matrix : ");
    scanf("%d %d",&r2, &c2);
    if (r1!=c2) {
        printf("Multiplication cannot be done\n");
    }
    else {
        printf("Enter elements of first matrix row-wise : ");
        for (int i = 0; i < r1; i++)  {
            for (int j = 0; j < c1; j++) {
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter elements of second matrix row-wise : ");
        for (int i = 0; i < r2; i++) {
            for (int j = 0; j < c2; j++) {
                scanf("%d", &b[i][j]);
            }
        }
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                c[i][j]=0;
                for (int k = 0; k < r2; k++) {
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
            }
        }
        printf("On multiplying, we get :\n");
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                printf("%2d ", c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}

// Enter number of rows and columns in first matrix : 2 2
// Enter number of rows and columns in second matrix : 2 2
// Enter elements of first matrix row-wise : 1 2 3 4
// Enter elements of second matrix 
// row-wise : 5 6 7 8
// On multiplying, we get :        
// 19 22
// 43 50