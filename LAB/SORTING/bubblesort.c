// Write a C program that implements the Bubble sort method to sort a given list of integers in ascending order.
#include<stdio.h>
void main()
{
    int n, a[20], temp, i, j;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    printf("Enter the array elements\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("The sorted array is\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
}