// Write a C program to find the sum of individual digits of a positive integer and test given number is palindrome.
// Sum of individual digits of a positive integer:
#include<stdio.h>
#include<math.h>
void main ()
{
  int number = 0, digit = 0, sum = 0;
  printf("Enter any number\n ");
  scanf("%d", &number);
  while (number != 0)
  {
  digit = number % 10;
  sum = sum + digit;
  number = number / 10;
  }
  printf ("Sum of individual digits of a given number is %d", sum);
}
// Test given number is palindrome:
#include <stdio.h>
void main()
{
  int number, t, rev=0, rmndr;
  printf("Please enter a number to check Palindrome : ");
  scanf("%d",&number);
  printf("\nEntered number: %d", number);
  t = number;
  while (number > 0)
  {
    rmndr = number%10;
    rev = rev*10 + rmndr;
    number = number/10;
  }
  printf("\nReversed number: %d", rev);
  if(t == rev)
  {
    printf("\nEntered number %d is a palindrome", t);
  }
  else
  {
    printf("\nEntered number %d is not a palindrome", t);
  }
}

// Enter any number
//  156
// Sum of individual digits of a given number is 12

// Please enter a number to check Palindrome : 564

// Entered number: 564
// Reversed number: 465
// Entered number 564 is not a palindrome