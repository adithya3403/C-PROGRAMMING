#include <stdio.h>
int main()
{
    double w, h, r;
    printf("Enter weight in kgs : ", w);
    scanf("%lf", &w);
    printf("Enter height in metres : ", h);
    scanf("%lf", &h);
    r=w/(h*h);
    printf("Your BMI result is %0.3f\n", r);
    if (r<18.5)
    {
        printf("Your condition is underweight");
    }
    else if (r>=18.5 && r<25)
    {
        printf("Your condition is normal");
    }
    else if (r>=25 && r<30)
    {
        printf("Your condition is overweight");
    }
    else if (r>=30)
    {
        printf("Your condition is obesity");
    }
    return 0;
    
}  