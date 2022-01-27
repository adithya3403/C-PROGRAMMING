#include <stdio.h>
void main() {
    int array[5];
    printf("Enter 5 numbers to store them in array \n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
    }
    printf("Element in the array are:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element stored at a[%d]=%d \n", i, array[i]);
    }
}
