// Write the program for the simple, compound interest
#include<stdio.h>
#include<math.h>
void main() {
  int p,t;
  float r,si,a,ci;
  printf("Enter principle, time and rate of interest : ");
  scanf("%d %d %f",&p,&t,&r);
  si=p*t*r/100;
  printf("Simple interest = %.3f",si);
  a=p*pow((1 +r/100),t);
  ci=a-p;
  printf("\nCompound interest = %.3f",ci);
}

// Please enter principle,time and rate of interest : 500 12 1
// Simple interest = 60.000
// Compound interest = 63.413