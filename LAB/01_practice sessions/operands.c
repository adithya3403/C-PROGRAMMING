// Write a simple program that prints the results of all the operators available in C (including pre/post increment, bitwise and/or/not, etc.). Read required operand values from standard input.

#include<stdio.h>
void main( )
{
    int a,b;
    printf("Enter the values of a and b : ");
    scanf("%d %d",&a,&b);
    printf("The arithmetic operators result is %d %d %d %d\n", a+b,a-b,a*b,a/b);
    printf("The relational operators result is %d %d %d %d\n", a>b,a<b,a>=b,a<=b);
    printf("The logical operators result is %d %d %d %d\n", a&&b,a||b,!(a==b));
    printf("The increment operator result is %d %d %d %d\n",a++,++a,b++,++b);
    printf("The decrement operator result is %d %d %d %d\n",a--,--a,b--,--b);
    printf("The bitwise AND operator result is %d\n",a&b);
    printf("The bitwise OR operator result is %d\n",a|b);
    printf("The bitwise NOT operator result is %d\n",a^b);
}

// Enter the values of a and b : 10 25
// The arithmetic operators result is 35 -15 250 0        
// The relational operators result is 0 1 0 1
// The logical operators result is 1 1 1 1
// The increment operator result is 11 11 26 26
// The decrement operator result is 11 11 26 26
// The bitwise AND operator result is 8
// The bitwise OR operator result is 27
// The bitwise NOT operator result is 19