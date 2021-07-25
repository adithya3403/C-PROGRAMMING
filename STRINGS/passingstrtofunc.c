#include <stdio.h>
void displayString(char str[])
{
    printf("String Output: ");
    puts(str);
}
void main()
{
    char str[50];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    displayString(str); 
}

// Enter string: hello
// String Output: hello