#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int n, i, c = 0;
    printf("Enter string : ");
    gets(str);
    n = strlen(str);
    for (i = 0; i < n / 2; i++) {
        if (str[i] == str[n - 1 - i]) {
            c++;
        }
    }
    if (c == i) {
        printf("%s is a palindrome", str);
    } else {
        printf("%s is not a palindrome", str);
    }
    return 0;
}
