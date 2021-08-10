// Write a simple program that converts one given data type to another using auto conversion and casting. Take the values form standard input. Program: 
#include<stdio.h>
void main() {
    float sum,count;
    int mean;
    printf("Enter the value of sum and count : ");
    scanf("%f %f", &sum, &count);
    mean=sum/count;
    printf("Mean is %d", mean);
}

// enter the value of sum and count
// 15 5
//  the value of mean is : 3