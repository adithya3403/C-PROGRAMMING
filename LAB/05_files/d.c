// Write a C program to merge two files into a third file (i.e., the contents of the
// first file followed by those of the second are put in the third file)
#include<stdio.h>
void main() {
    FILE *f1,*f2,*f3; char s[100];
    f1=fopen("source.txt","r");
    f2=fopen("target.txt","r");
    f3=fopen("file5.txt","w"); 
    if(f1==NULL || f2==NULL || f3==NULL) {
        printf("Error opening file"); 
    }
    while(fgets(s,99,f1)!=NULL) {
        fputs(s,f3);
    }
    while(fgets(s,99,f2)!=NULL) {
        fputs(s,f3);
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);
}

// 