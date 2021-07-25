#include <stdio.h>
int fact(int n)
{
    int f=1;
    for(int i = 1 ; i <= n ; i++)
        f = f*i;
    return f;
}
void main()
{
    int n,f;
    printf("Enter number : ");
    scanf("%d", &n);
    f=fact(n);
    printf("Factorial of %d is %d", n, f);
}

// Enter number : 5
// Factorial of 5 is 120