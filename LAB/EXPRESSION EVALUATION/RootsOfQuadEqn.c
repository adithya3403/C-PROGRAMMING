// Write a C program to find the roots of a Quadratic equation.
#include<stdio.h>
#include<math.h>
void main() {
    int a,b,c,d,x,y;
    float r1,r2;
    printf("ENTER VALUES FOR a,b,c:\n");
    scanf("%d %d %d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0) {
        printf("THE ROOTS ARE REAL & THEY ARE..\n");
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("r1=%f",r1);
        printf("r2=%f",r2);
    }
    else if(d==0)
    {
        printf("THE ROOTS ARE EQUAL & THEY ARE..\n");
        r1=-b/(2*a);
        r2=r1;
        printf("r1=%f",r1);
        printf("r2=%f",r2);
    }
    else
    {
        printf("THE ROOTS ARE IMAGINARY");
        x=-b/(2*a);
        y= sqrt(d)/(2*a);
        printf("r1=%f+i%f",x,y);
        printf("r1=%f-i%f",x,y);
    }
}

// ENTER VALUES FOR a,b,c:
// 1 -4 4
// THE ROOTS ARE EQUAL & THEY ARE..
// r1=2.000000r2=2.000000