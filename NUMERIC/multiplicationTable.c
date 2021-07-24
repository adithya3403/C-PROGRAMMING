// Write a program that prints a multiplication table for a given number and the number of rows in the table. For example, for a number 5 and rows = 3, the output should be: 
// 5 x 1 = 5
//  5 x 2 = 10 
// 5 x 3 = 15
#include <stdio.h>
#include<conio.h>
void main()
{
  int n, i, range;
  printf("Enter an integer: ");
  scanf("%d",&n);
  printf("Enter the range: ");
  scanf("%d", &range);
  for(i=1; i<=range;i++)
    printf("%d * %d = %d \n",n,i, n*i);
}
