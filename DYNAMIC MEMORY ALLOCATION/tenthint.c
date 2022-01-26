/*wap to insert an integer into 10th location of the memory out of 20 locations and print it
case=1
input=
output=Value of the 10th location integer is 500*/

#include <stdio.h>
#include <stdlib.h>
void main() {
    int *pt = (int *)malloc(20 * sizeof(int));
    *(pt + 9) = 500;
    int x;
    x = *(pt + 9);
    printf("Value of the 10th location integer is %d", x);
}