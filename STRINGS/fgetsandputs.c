#include <stdio.h>
void main()
{
    char name[30];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin); 
    printf("Name: ");
    puts(name);
}

// Enter name: ajay
// Name: ajay