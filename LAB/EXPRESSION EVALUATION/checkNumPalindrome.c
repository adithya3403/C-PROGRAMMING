// Write a C program to find the sum of individual digits of a positive integer and test given number is palindrome.
// Sum of individual digits of a positive integer:
#include<stdio.h>
#include<math.h>
void main () {
  int n = 0, d = 0, sum = 0;
  printf("Enter a number : ");
  scanf("%d", &n);
  while (n != 0) {
    d = n % 10;
    sum = sum + d;
    n = n / 10;
  }
  printf ("Sum of individual digits of %d is %d", n, sum);
}

// Enter a number : 156
// Sum of individual digits of 156 is 12


// Test given n is palindrome:
#include <stdio.h>
void main() {
  int n, t, rev=0, rem;
  printf("Enter number to check palindrome : ");
  scanf("%d",&n);
  printf("Entered number is %d\n", n);
  t = n;
  while (n > 0) {
    rem = n%10;
    rev = rev*10 + rem;
    n = n/10;
  }
  printf("Reversed number is %d", rev);
  if(t == rev) 
    printf("\nPalindrome", t);
  else 
    printf("\nNot a palindrome", t);
}

// Enter number to check palindrome : 564
// Entered number is 564
// Reversed number is 465
// Palindrome