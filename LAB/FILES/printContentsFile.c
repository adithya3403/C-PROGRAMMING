// C Program to print contents of file
#include <stdio.h>
#include <stdlib.h>
void main() {
    FILE *fptr;
    char name[100], c;
    printf("Enter the filename to open \n");
    //  With extension
    scanf("%s", filename);
    fptr = fopen(filename, "r");
    if (fptr == NULL) {
        printf("Cannot open file \n");
        exit(0);
    }
    c = fgetc(fptr);
    while (c != EOF) {
        printf ("%c", c);
        c = fgetc(fptr);
    }
    fclose(fptr);
}

// Enter the filename to open 
// sample.txt
// h