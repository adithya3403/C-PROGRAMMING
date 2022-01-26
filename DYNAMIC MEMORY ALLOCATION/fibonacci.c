/*
case=1
input=
10
output=Enter the number of terms
                                
0 1 1 2 3 5 8 13 21 34                                                                                                  
                          */

#include <stdio.h>
int f(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return (f(n - 1) + f(n - 2));
    }
}
void main() {
    int n;
    printf("Enter the number of terms\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("%d ", f(i));
    }
}
