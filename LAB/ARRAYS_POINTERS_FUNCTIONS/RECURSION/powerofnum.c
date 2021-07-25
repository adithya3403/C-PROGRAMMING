#include <stdio.h>
#include <math.h>
int power(int base, int a) 
{
    if (a != 0)
        return (base * power(base, a - 1));
    else
        return 1;
}
int main() 
{
    int base, a, result;
    printf("Enter base : ");
    scanf("%d", &base);
    printf("Enter power : ");
    scanf("%d", &a);
    result = power(base, a);
    printf("%d^%d = %d", base, a, result);
    return 0;
}

// Enter base : 6
// Enter power : 3
// 6^3 = 216