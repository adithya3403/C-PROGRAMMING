//Print reverse of number taken as input from user
#include <stdio.h>
#include <math.h>
#include <conio.h>
/*function*/
int main() {
  long long digit;
  int n=0, nd;
  printf("Enter number : ");
  scanf("%lld", &digit);
  while (digit!=0) {
    digit/=10;
    ++n;
  }
  nd=n;
  printf("Number of digits = %d", nd);
  return 0;
}

