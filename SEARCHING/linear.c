// Linear Search
#include <stdio.h>
int search(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}
void main() {
    int n;
    printf("Enter number of elements : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements : ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int x;
    printf("Enter element to be searched : ");
    scanf("%d", &x);
    int result = search(arr, n, x);
    (result == -1) ? printf("Element is not present in array") : printf("Element is present at index %d", result);
}