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

<<<<<<< HEAD
// Enter 5 numbers to store them in array 
// 1 2 3 4 5
// Element in the array are:
// Element stored at a[0]=1 
// Element stored at a[1]=2 
// Element stored at a[2]=3 
// Element stored at a[3]=4 
// Element stored at a[4]=5 
=======
// Enter 5 numbers to store them in array
// 1 2 3 5 6
// Element in the array are:
// Element stored at a[0]=1
// Element stored at a[1]=2
// Element stored at a[2]=3
// Element stored at a[3]=5
// Element stored at a[4]=6
>>>>>>> 11d2baa40e3a8c1e883bd554e339d81173b0a835
