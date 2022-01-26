// Heap Sort
#include <stdio.h>
void swap(int *x, int *y) {
    int z;
    z = *x;
    *x = *y;
    *y = z;
}
void heapify(int arr[], int n, int i) {
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < n && arr[l] > arr[largest]) {
        largest = l;
    }
    if (r < n && arr[r] > arr[largest]) {
        largest = r;
    }
    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}
void heapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
    for (int i = n - 1; i > 0; i--) {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
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
    heapSort(arr, n);
    printf("Sorted array is : ");
    printArray(arr, n);
}