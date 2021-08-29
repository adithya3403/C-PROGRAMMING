#include <stdio.h>
int bin(int array[], int x, int low, int high) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (array[mid] == x) {
            return mid;
        } else if (array[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}
void main() {
    int n, x;
    printf("Enter number of elements : ");
    scanf("%d", &n);
    int array[n];
    printf("Enter elements : ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    printf("Enter element to search : ");
    scanf("%d", &x);
    int r = bin(array, x, 0, n - 1);
    if (r == -1) {
        printf("Not found");
    } else {
        printf("Element is found at index %d", r);
    }
}

// Enter number of elements : 5
// Enter elements : 1 4 2 5 8
// Enter element to search : 8
// Element is found at index 4
