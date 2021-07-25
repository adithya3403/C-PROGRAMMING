#include <stdio.h>
#include <string.h>
void main()
{
    char s1[10] = "Hello";
    char s2[10] = "World";
    strcat(s1,s2);
    printf("Output string after concatenation: %s", s1);
}

// Output string after concatenation: HelloWorld