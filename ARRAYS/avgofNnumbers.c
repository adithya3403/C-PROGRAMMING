#include <stdio.h>
void main() {
    int marks[10], n, sum = 0, average;
    printf("Enter number of subjects: ");
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        printf("Enter subject marks%d: ", i + 1);
        scanf("%d", &marks[i]);
        sum = sum + marks[i];
    }
    average = sum / n;
    printf("Average = %d", average);
}

// input
// Enter number of subjects: 3
// Enter subject marks1: 50
// Enter subject marks2: 60
// Enter subject marks3: 70
// output
// Average = 60