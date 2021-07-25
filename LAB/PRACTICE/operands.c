/*
Write a simple program that prints the results of all the operators available in C (including pre/
post increment, bitwise and/or/not, etc.). Read required operand values from standard input.
*/
#include<stdio.h>
void main( )
{
  int a,b;
  printf("\n\tenter the values of a and b");
  scanf("\n%d%d",&a,&b);
  printf("\nthe arithmetic operators result is %d %d %d %d", a+b,a-b,a*b,a/b);
  printf("\nthe relational operators result is %d %d %d %d", a>b,a<b,a>=b,a<=b);
  printf("\nthe logical operators result is %d %d %d %d", a&&b,a||b,!(a==b));
  printf("\nthe increment operator result is %d %d %d %d",a++,++a,b++,++b);
  printf("\nthe decrement operator result is %d %d %d %d",a--,--a,b--,--b);
  printf("\nthe bitwise AND operator result is %d",a&b);
  printf("\nthe bitwise OR operator result is %d",a|b);
  printf("\nthe bitwise NOT operator result is %d",a^b);
}


//         enter the values of a and b
// 10 25

// the arithmetic operators result is 35 -15 250 0        
// the relational operators result is 0 1 0 1
// the logical operators result is 1 1 1 1
// the increment operator result is 11 11 26 26
// the decrement operator result is 11 11 26 26
// the bitwise AND operator result is 8
// the bitwise OR operator result is 27
// the bitwise NOT operator result is 19