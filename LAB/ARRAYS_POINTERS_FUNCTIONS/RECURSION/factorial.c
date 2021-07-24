#include <stdio.h>
unsigned int factorial(unsigned int n)
{
    if (n==0)
        return 1;
    else
        return n*factorial(n-1);
}
int main()
{
    int num;
    printf("Enter number : ");
    scanf("%d", &num);
    printf("Factorial is %d", factorial(num));
    return 0;
}