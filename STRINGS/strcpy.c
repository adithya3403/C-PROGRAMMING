#include <stdio.h>
#include <string.h>
void main() {
    char s1[30] = "string 1";
    char s2[30] = "string 2 : I'm gonna copied into s1";
    strcpy(s1, s2);
    printf("String s1 is: %s", s1);
}