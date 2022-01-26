#include <stdio.h>
void main() {
    int r, k = 1;
    printf("Enter number of rows : ");
    scanf("%d", &r);
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", k);
            k += 1;
        }
        printf("\n");
    }
}