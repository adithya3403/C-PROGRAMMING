// Write a program for reading elements using pointer into array and display the values using array.
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *a[3];
    int b=10, c=20, d=30, i;
    a[0]=&b;
    a[1]=&c;
    a[2]=&d;
    for(i=0; i<3; i++)
    {
        printf("\nAddress = %u",&a[i]);
        printf("\nValue = %d",*(a[i]));
    }
}
