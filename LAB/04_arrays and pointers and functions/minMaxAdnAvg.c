// Write a C program to find the minimum, maximum and average in an array of integers.
#include <stdio.h>
#define MAX_SIZE 100 // Maximum array size
int main() {
    int arr[MAX_SIZE];
    int max, min, size;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter elements in the array: ");
    for(int i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for(int i=1; i<size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        else if(arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d", min);
}

// Enter size of the array: 4
// Enter elements in the array: 1 2 5 8
// Maximum element = 8
// Minimum element = 1
