#include <stdio.h>
int main() {
    int n;
    int i=1;
    printf("Enter a number:");
    scanf("%d", &n);
    for (; i<=10; i++) {
        printf("%d x %d = %d\n", n, i, n*i);
    }
    return 0;
}