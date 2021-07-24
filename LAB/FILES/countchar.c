// Write a C program to count the number of times a character occurs in a text file. The file name and the character are supplied as command line arguments.
#include <stdio.h>
#include <string.h>
void find_frequency(char s[], int count[]) 
{
    int c = 0;
    while (s[c] != '\0')
    {
        if (s[c] >= 'a' && s[c] <= 'z' )
            count[s[c]-'a']++;
            c++;
    }
}
void main()
{
    char string[100];
    int c, count[26] = {0};
    printf("Input a string\n");
    gets(string);
    find_frequency(string, count);
    printf("Character Count\n");
    for (c = 0 ; c < 26 ; c++)
    printf("%c \t %d\n", c + 'a', count[c]);
}