#include <stdio.h>
void main() {
    int rows, i, j, number = 1;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; ++j)
            printf("%d ", number);
        ++number;
        printf("\n");
    }
}

// Enter number of rows: 6
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
// 6 6 6 6 6 6