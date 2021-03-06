// Write a functions to compute mean, variance, Standard Deviation, sorting of n elements in single dimension array.
#include <math.h>
#include <stdio.h>
#define MAXSIZE 10
void main() {
    float x[MAXSIZE];
    int n;
    float average, variance, std_deviation, sum = 0, sum1 = 0;
    printf("Enter the value of N \n");
    scanf("%d", &n);
    printf("Enter %d real numbers \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &x[i]);
    }
    for (int i = 0; i < n; i++) {
        sum = sum + x[i];
    }
    average = sum / (float)n;
    for (int i = 0; i < n; i++) {
        sum1 = sum1 + pow((x[i] - average), 2);
    }
    variance = sum1 / (float)n;
    std_deviation = sqrt(variance);
    printf("Average of all elements = %.2f\n", average);
    printf("variance of all elements = %.2f\n", variance);
    printf("Standard deviation = %.2f\n", std_deviation);
}

// Enter the value of N
// 5
// Enter 5 real numbers
// 1 2 3 5 8
// Average of all elements = 3.80
// variance of all elements = 6.16
// Standard deviation = 2.48