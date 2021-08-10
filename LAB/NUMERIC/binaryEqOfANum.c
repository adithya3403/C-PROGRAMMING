// Write a program that shows the binary equivalent of a given positive number between 0 to 255.
#include <stdio.h>
int bineq(int num) {
    if (num == 0) 
      return 0;
    else 
      return (num % 2) + 10 * bineq(num / 2);
}
void main() {
    int num, bin;
    printf("Enter a decimal number : ");
    scanf("%d", &num);
    bin = bineq(num);
    printf("The binary equivalent of %d is %d", num, bin);
}

// Enter a decimal number: 45
// The binary equivalent of 45 is 101101