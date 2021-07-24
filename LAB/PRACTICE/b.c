// Write a simple program that converts one given data type to another using auto conversion and casting. Take the values form standard input. Program: 
#include<stdio.h>
#include<conio.h>
void main()
{
  float sum,count;
  int mean;
  //clrscr();
  printf("enter the value of sum and count");
  scanf("%f%f",&sum,&count);
  mean=sum/count;
  printf(" the value of mean is : %d\n", mean);
}
