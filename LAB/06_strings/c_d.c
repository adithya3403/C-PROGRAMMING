// To insert a sub-string in to a given main string from a given position.
#include <stdio.h>
#include <string.h>
void insertStr(char m[100], char s[100], int pos) {
    int i, lm = strlen(m), ls = strlen(s);
    for (i = lm; i >= pos; i--)
        m[i + ls] = m[i];
    for (i = 0; i < ls; i++)
        m[i + pos] = s[i];
}
int main() {
    char m[100], s[100];
    int pos, n;
    printf("\n enter main string for insertion:");
    gets(m);
    printf("\nenter sub string:");
    gets(s);
    printf("\nEnter position to insert substring after how many letters :");
    scanf("%d", &pos);
    insertStr(m, s, pos);
    printf("\nMain string after insertion: %s", m);
}

//  enter main string for insertion:hello world

// enter sub string:hi

// Enter position to insert substring after how many letters :5

// Main string after insertion: hellohi world