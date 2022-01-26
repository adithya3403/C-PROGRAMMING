// Binary Search
#include <stdio.h>
int b(int arr[], int l, int r, int x) {
    if (r >= l) {
        int m = (r + l) / 2;
        if (arr[m] == x) {
            return m;
        } else if (arr[m] > x) {
            return b(arr, l, m - 1, x);
        }
        return b(arr, m + 1, r, x);
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
    int result = b(arr, 0, n - 1, x);
    (result == -1) ? printf("Element is not present") : printf("Element is present at index %d", result);
}