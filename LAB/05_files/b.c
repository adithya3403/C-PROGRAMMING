// Write a C program to copy one file to another file & while doing so replace all lower case character to their equivalent upper case character.
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *p1, *p2;
    char ch;
    p1 = fopen("source.txt", "r");
    if (p1 == NULL) {
        puts("File does not exist..");
        exit(1);
    }
    p2 = fopen("target.txt", "w");
    if (p2 == NULL) {
        puts("File does not exist..");
        fclose(p1);
        exit(1);
    }
    while ((ch = fgetc(p1)) != EOF) {
        ch = toupper(ch);
        fputc(ch, p2);
    }
    printf("\nFile successfully copied..");
}

// File successfully copied..