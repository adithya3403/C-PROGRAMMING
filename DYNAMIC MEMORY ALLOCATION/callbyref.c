/*case=1
input=
output=values before swap m = 22                                                                                               
 and n = 44                                                                                                             
 values after swap a = 44                                                                                               
and b = 22*/

#include <stdio.h>
void swap(int *a, int *b) {
    int x;
    x = *a;
    *a = *b;
    *b = x;
}
void main() {
    int x = 22, y = 44;
    printf("values before swap m = %d\n and n = %d", x, y);
    swap(&x, &y);
    printf("\n values after swap a = %d \nand b = %d", x, y);
}