// Write a C program to determine if the given string is a palindrome or not (Spelled same in both directions with or without a meaning like madam, civic, noon, abcba, etc.)
#include <stdio.h>
#include <string.h>
int main()
{
    char s[20];
    int i, l;
    int j = 0;
    printf("Enter a string:");
    scanf("%s", s);
    l = strlen(s);
    for (i=0;i < l ;i++)
    {
        if (s[i] != s[l-i-1])
        {
            j = 1;
            break;
        }
    }
    if (j) 
        printf("%s is not a palindrome", s);
    else 
        printf("%s is a palindrome", s);
}