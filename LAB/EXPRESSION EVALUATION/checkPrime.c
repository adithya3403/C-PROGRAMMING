// Write a program that finds if a given number is a prime number
#include<stdio.h>
void main()
{
  int n,i,flag=0;
  printf("\nEnter a number:");
  scanf("%d",&n);
  for(i=2;i<=n/2;i++)
  {
    if(n%i==0)
    {
      flag=1; 
      break;
    }
  }
  if(flag==0)
    printf("%d is a prime number",n);
  else
    printf("%d is not a prime number",n);
}
