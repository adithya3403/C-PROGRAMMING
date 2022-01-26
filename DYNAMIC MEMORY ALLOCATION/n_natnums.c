/*
case=1
input= 10
output=Enter a positive integer:                                                                                            
sum = 55                                                                                                                
case=2
input= 15
output=Enter a positive integer:                                                                                            
sum = 120         */

#include <stdio.h>
int sum(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + sum(n - 1);
    }
}
void main() {
    int n;
    printf("Enter a positive integer:\n");
    scanf("%d", &n);
    printf("sum = %d", sum(n));
}
