// Insertion sort
#include <math.h>
#include <stdio.h>
void insertionSort(int arr[], int n) {
    int key, j;
    for (int i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
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
    input(arr, n);
    insertionSort(arr, n);
    printf("Sorted array is : ");
    printArray(arr, n);
}