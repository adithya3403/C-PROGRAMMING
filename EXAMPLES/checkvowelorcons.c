#include <stdio.h>
int main()
{
    char c;
    int low, upp;
    printf("Enter alphabet : ");
    scanf("%c", &c);
    low=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    upp=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if (low||upp)
    {
        printf("%c is a vowel\n", c);
    }
    else
    {
        printf("%c is a consonant\n", c);
    }
    return 0;
}
