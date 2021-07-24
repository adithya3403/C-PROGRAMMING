// Write a C program to count the lines, words and characters in a given text.
#include <stdio.h>
#include <string.h>
void main()
{
    char str[100];
    int i = 0, l = 0, f = 1;
    puts("Enter any string\n");
    gets(str);
    for(i = 0; str[i] !='\0'; i++)
        l = l + 1;
    printf("The number of characters in the string are %d\n", l);
    for(i = 0; i <= l-1; i++)
    {
        if(str[i] == ' ')
            f = f + 1;
    }
    printf("The number of words in the string are %d", f);
}