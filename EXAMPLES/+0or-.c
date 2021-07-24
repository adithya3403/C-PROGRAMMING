//Positive, Zero or Negative
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    if (n>0)
      printf("%d is positive\n", n);
    else if (n==0)
      printf("%d is zero\n", n);
    else if (n<0)
      printf("%d is negative\n", n);
    else
      printf("An error occured\n");
    return 0;
}
