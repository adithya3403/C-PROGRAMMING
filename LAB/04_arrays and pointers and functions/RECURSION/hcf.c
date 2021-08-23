#include <stdio.h>
int hcf(int a, int b) {
    if (b!=0) {
        return hcf(b, a%b);
    }
    else {
        return a;   
    }
}
int main() {
    int a, b, lcm;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    lcm=(a*b)/hcf(a, b);
    printf("HCF = %d & LCM = %d\n",hcf(a, b), lcm);
    return 0;
}

// Enter first number : 6
// Enter second number : 22
// HCF = 2 & LCM = 66