// Write a C program that implements the bubble sort method to sort a given list of integers in ascending order
#include <stdio.h>
void swap(int *x, int *y) {
    int z = *x;
    *x = *y;
    *y = z;
}
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array is : ");
    printArray(arr, n);
}

// Sorted array is : 11 12 22 25 34 64 90 