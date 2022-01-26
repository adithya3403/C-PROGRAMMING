#include <stdio.h>
void swap2nums(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int a, b;
    printf("Enter a and b : ");
    scanf("%d %d", &a, &b);
    swap2nums(&a, &b);
    printf("After swapping:\n");
    printf("num1=%d\nnum2=%d\n", a, b);
    return 0;
}