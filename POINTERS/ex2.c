#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *a[3];
    int b=10, c=20, d=30;
    a[0]=&b;
    a[1]=&c;
    a[2]=&d;
    for(int i=0; i<3; i++)
    {
        printf("Address = %u\n",&a[i]);
        printf("Value = %d\n",*(a[i]));
    }
}

// Address = 6422288
// Value = 10
// Address = 6422292
// Value = 20
// Address = 6422296
// Value = 30