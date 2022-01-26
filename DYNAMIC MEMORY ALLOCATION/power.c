/*
case=1
input= 3
 3
output=
Enter value of base:                                                                                                  
Enter value of power:                                                                                                 
3 to the power of 3 is: 27                                                                                              
*/

#include <stdio.h>
int pow(int b, int n) {
    if (n == 0) {
        return 1;
    } else {
        return (b * pow(b, n - 1));
    }
}
void main() {
    int b;
    printf("Enter value of base:\n");
    scanf("%d", &b);

    int p;
    printf("Enter value of power:\n");
    scanf("%d", &p);

    printf("%d to the power of %d is %d", b, p, pow(b, p));
}
