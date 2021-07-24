// Write a C program that converts a number ranging from 1 to 50 to Roman equivalent
#include <stdio.h>
char roman[1000];
int i = 0;
void predigit(char num1, char num2)
{
    roman[i++] = num1;
    roman[i++] = num2;
}
void postdigit(char c, int n)
{
    int j;
    for (j = 0; j < n; j++)
    roman[i++] = c;
}
void main()
{
    int j;
    long n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Invalid number");
    }
    while (n != 0)
    {
        if (n >= 1000)
        {
            postdigit('M', n / 1000);
            n = n - (n / 1000) * 1000;
        }
        else if (n >= 500)
        {
            if (n < (500 + 4 * 100))
            {
                postdigit('D', n / 500);
                n = n - (n / 500) * 500;
            }
            else
            {
                predigit('C','M');
                n = n - (1000-100);
            }
        }
        else if (n >= 100)
        {
            if (n < (100 + 3 * 100))
            {
                postdigit('C', n / 100);
                n = n - (n / 100) * 100;
            }
            else
            {
                predigit('L', 'D');
                n = n - (500 - 100);
            }
        }
        else if (n >= 50 )
        {
            if (n < (50 + 4 * 10))
            {
                postdigit('L', n / 50);
                n = n - (n / 50) * 50;
            }
            else
            {
                predigit('X','C');
                n = n - (100-10);
            }
        }
        else if (n >= 10)
        {
            if (n < (10 + 3 * 10))
            {
                postdigit('X', n / 10);
                n = n - (n / 10) * 10;
            }
            else
            {
                predigit('X','L');
                n = n - (50 - 10);
            }
        }
        else if (n >= 5)
        {
            if (n < (5 + 4 * 1))
            {
                postdigit('V', n / 5);
                n = n - (n / 5) * 5;
            }
            else
            {
                predigit('I', 'X');
                n = n - (10 - 1);
            }
        }
        else if (n >= 1)
        {
            if (n < 4)
            {
                postdigit('I', n / 1);
                n = n - (n / 1) * 1;
            }
            else
            {
                predigit('I', 'V');
                n = n - (5 - 1);
            }
        }
    }
    printf("Roman number is: ");
    for(j = 0; j < i; j++)
        printf("%c", roman[j]);
}