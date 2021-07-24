#include <stdio.h>
int main() {
    int a;
    printf("Enter marks out of 100:", a);
    scanf("%d", &a);
    if (a>=90) 
    {
        printf("Top 10%%\nPassed");
    }  
    if (a>=40 && a<=90)
    {
        printf("You passed\n");
    }
    if (a<40)
    {
        printf("You failed\n");
    }
    return 0;
}
    
