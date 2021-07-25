// Write a C program to find the roots of a Quadratic equation.
#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,disc,x,y;
    float root1,root2;
    printf("ENTER VALUES FOR a,b,c:\n");
    scanf("%d %d %d",&a,&b,&c);
    disc=b*b-4*a*c;
    if(disc>0)
    {
        printf("THE ROOTS ARE REAL & THEY ARE..\n");
        root1=(-b+sqrt(disc))/(2*a);
        root2=(-b-sqrt(disc))/(2*a);
        printf("Root1=%f",root1);
        printf("Root2=%f",root2);
    }
    else if(disc==0)
    {
        printf("THE ROOTS ARE EQUAL & THEY ARE..\n");
        root1=-b/(2*a);
        root2=root1;
        printf("Root1=%f",root1);
        printf("Root2=%f",root2);
    }
    else
    {
        printf("THE ROOTS ARE IMAGINARY");
        x=-b/(2*a);
        y= sqrt(disc)/(2*a);
        printf("Root1=%f+i%f",x,y);
        printf("Root1=%f-i%f",x,y);
    }
}

// ENTER VALUES FOR a,b,c:
// 1 -4 4
// THE ROOTS ARE EQUAL & THEY ARE..
// Root1=2.000000Root2=2.000000