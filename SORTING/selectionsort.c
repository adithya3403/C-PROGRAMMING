// Selection sort
#include <stdio.h>
void swap(int *x, int *y) {
    int z;
    z = *x;
    *x = *y;
    *y = z;
}
void selectionSort(int arr[], int n) {
    int i, j, min;
    for (int i = 0; i < n - 1; i++) {
        min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        swap(&arr[min], &arr[i]);
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void input(int arr[], int n) {
    printf("Enter elements : ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}
void main() {
    int n;
    printf("Enter number of elements : ");
    scanf("%d", &n);
    int arr[n];
    selectionSort(arr, n);
    printf("Sorted array is : ");
    printArray(arr, n);
}