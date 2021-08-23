// To delete n Characters from a given position in a given string.
#include<stdio.h>
#include<string.h>
void deleteStr(char m[100],int n,int pos)
{
    int i,Len=strlen(m); 
    for(i=pos;i<=(Len+1-n );i++)
        m[i]=m[i+n];
}
void main()
{
    char m[100],s[100]; int pos,n;
    printf("\nEnter main string for deletion:");
    gets(m);
    printf("\nEnter no of characters to be deleted:");
    scanf("%d",&n);
    printf("\nEnter position:");
    scanf("%d",&pos);
    deleteStr(m,n,pos);
    printf("\nmain string after deletion: %s",m);
}

// Enter main string for deletion:helllo

// Enter no of characters to be deleted:1

// Enter position:4

// main string after deletion: hello