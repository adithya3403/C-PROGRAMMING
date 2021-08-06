// Bubble Sort
#include <stdio.h>
void swap(int *x, int *y) {
    int z;
    z = *x;
    *x = *y;
    *y = z;
}
void input(int arr[], int n) {
    printf("Enter elements : ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }  
}
void printArray(int arr[], int size) {
    printf("Sorted array is : ");
    for (int i=0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void main() {
    int n;
    printf("Enter number of elements : ");
    scanf("%d", &n);
    int arr[n];
    input(arr, n);
    bubbleSort(arr, n);
    printArray(arr, n);
}