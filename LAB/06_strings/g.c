// Write a C program that displays the position or index in the string S where the string T begins, or – 1 if S doesn’t contain T.
#include <stdio.h>
#include <string.h>
void main() {
    char s[30], t[20];
    char *found;
    puts("Enter the first string: ");
    gets(s);
    puts("Enter the string to be searched: ");
    gets(t);
    found = strstr(s, t);
    if (found)
        printf("Second String is found in the First String at %d position.\n", found - s);
    else
        printf("-1");
}

// Enter the first string:
// hello
// Enter the string to be searched:
// el
// Second String is found in the First String at 1 position.