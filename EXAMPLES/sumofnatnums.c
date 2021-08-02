#include <stdio.h>
int sum(int n) 
{
    if (n==0) 
    {
        return 0;
    } 
    else 
    {
        return n+sum(n-1);
    }
}
void main() 
{
    int n;
    printf("Enter a positive integer:\n");
    scanf("%d", &n);
    printf("sum = %d", sum(n));
}

// Enter a positive integer:
// 15
// sum = 120