// Write a C program to copy one file to another file & while doing so replace
// all lower case character to their equivalent upper case character.
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen("source.txt", "r");
    if (fp1 == NULL)
    {
        puts("File does not exist..");
        exit(1);
    }
    fp2 = fopen("target.txt", "w");
    if (fp2 == NULL)
    {
        puts("File does not exist..");
        fclose(fp1);
        exit(1);
    }
    while((ch=fgetc(fp1))!=EOF)
    {
        ch = toupper(ch);
        fputc(ch,fp2);
    }
    printf("\nFile successfully copied..");
}


// File successfully copied..