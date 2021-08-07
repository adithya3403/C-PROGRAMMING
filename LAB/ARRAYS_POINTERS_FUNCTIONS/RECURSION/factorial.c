// factorial of number using recursion
#include <stdio.h>
int f(int n)
{
    if (n==0)
        return 1;
    else
        return n*f(n-1);
}
int main()
{
    int num;
    printf("Enter number : ");
    scanf("%d", &num);
    printf("Factorial is %d", f(num));
    return 0;
}

// Enter number : 5
// Factorial is 120