// Write a C program using pointers to read in an array of integers and print its elements in reverse order.
#include <conio.h>
#include <stdio.h>
#define MAX 30
void main() {
    int size, arr[MAX];
    int *ptr;
    ptr = &arr[0];
    printf("\nEnter the size of array : ");
    scanf("%d", &size);
    printf("\nEnter %d integers into array: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", ptr);
        ptr++;
    }
    ptr = &arr[size - 1];
    printf("\nElements of array in reverse order are :");
    for (int i = size - 1; i >= 0; i--) {
        printf("\nElement%d is : %d", i, *ptr);
        ptr--;
    }
}

// Enter the size of array : 4

// Enter 4 integers into array: 1 2 5 8

// Elements of array in reverse order are :
// Element3 is : 8
// Element2 is : 5
// Element1 is : 2
// Element0 is : 1