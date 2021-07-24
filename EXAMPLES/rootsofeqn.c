#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,d,r1,r2,real,imag;
    printf("Enter coefeicient of x^2 = ");
    scanf("%lf",&a);
    printf("Enter coefficient of x = ");
    scanf("%lf", &b);
    printf("Enter constant = ");
    scanf("%lf", &c);
    d=(b*b)-(4*a*c);
    if (d>0)
    {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("Root1 = %0.2lf\nRoot2 = %0.2lf\n", r1, r2);
    }
    else if (d==0)
    {
        r1=r2=-b/(2*a);
        printf("Root1 = Root2 = %0.2lf\n", r1);
    }
    else
    {
        real=-b/(2*a);
        imag=sqrt(-d)/(2*a);
        printf("Roots are : \nRoot1 = %0.2lf+%0.2lfi\nRoot2 = %0.2lf-%0.2lfi\n",real, imag, real, imag);
    }
    return 0;
}