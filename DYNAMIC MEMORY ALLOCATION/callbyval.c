/*case=1
input=
output=values before swap  m = 22 and n = 44                                                                                   
                                                                                                                        
values after swap m = 44and n = 22                                                                                      
*/

#include <stdio.h>
void swap(int a, int b) {
    int x;
    x = a;
    a = b;
    b = x;
    printf("\nvalues after swap m = %dand n = %d", a, b);
}
void main() {
    int n1 = 22, n2 = 44;
    printf("values before swap  m = %d and n = %d", n1, n2);
    swap(n1, n2);
}