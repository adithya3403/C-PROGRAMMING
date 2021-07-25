// Write a program that shows the binary equivalent of a given positive number between 0 to 255.
#include <stdio.h>
#include<conio.h>
int binary_conversion(int);
void main()
{
  int num, bin;
  printf("Enter a decimal number: ");
  scanf("%d", &num);
  bin = binary_conversion(num);
  printf("The binary equivalent of %d is %d\n", num, bin);
  getch();
}
int binary_conversion(int num)
{
  if (num == 0)
    return 0;
  else
    return (num % 2) + 10 * binary_conversion(num / 2);
}

// Enter a decimal number: 45
// The binary equivalent of 45 is 101101