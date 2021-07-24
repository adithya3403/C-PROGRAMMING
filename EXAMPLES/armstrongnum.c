//Armstrong Number
#include <stdio.h>
#include <math.h>
#include <conio.h>
/*function*/
int main() {
  int n, original, rem, result=0;
  printf("Enter a number : ");
  scanf("%d", &n);
  original=n;
  while (original!=0) {
    rem=original%10;
    result+=rem*rem*rem;
    original/=10;
  }
  if (result==n) {
    printf("%d is an Armstrong number", n);
  }
  else {
    printf("%d is not an Armstrong number", n);
  }
  return 0;
}