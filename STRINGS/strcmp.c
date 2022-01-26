#include <stdio.h>
#include <string.h>
void main() {
    char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd";
    int result;
    result = strcmp(str1, str2);
    printf("strcmp(str1, str2) = %d\n", result);
    // unequal;
    result = strcmp(str1, str3);
    printf("strcmp(str1, str3) = %d\n", result);
    // equal
}

// strcmp(str1, str2) = 1
// strcmp(str1, str3) = 0