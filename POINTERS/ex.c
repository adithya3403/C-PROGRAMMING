#include<stdio.h>
void main()
{
    int a=10;
    int *ptr;
    ptr=&a;
    printf("\n the value of a=%d",a);//10
    printf("\n the address of a=%u",&a);//2020
    printf("\n the value of pointer,ptr=%u",ptr);//2020
    printf("\n the address of pointer ptr=%u",&ptr);//3030
    printf("\n the value of the pointer pointing=%d",*ptr);//10
    //OR
    printf("\n the value of a=%d",*(&a));
}
