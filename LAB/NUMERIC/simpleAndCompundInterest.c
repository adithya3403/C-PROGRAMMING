// Write the program for the simple, compound interest
#include<stdio.h>
#include<math.h>
void main()
{
  int p,t;
  float r,si,amount,ci;
  printf("Please enter principle,time and rate of interest");
  scanf("%d%d%f",&p,&t,&r);
  si=p*t*r/100;
  printf("\nSimple interest = %.3f",si);
  amount=p*pow((1 +r/100),t);
  ci=amount-p;
  printf("\nCompound interest = %.3f",ci);
}


// input
//500 12 1

// output
//60
//63.413
