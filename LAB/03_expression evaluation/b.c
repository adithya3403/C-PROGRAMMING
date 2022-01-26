// Write a C program, which takes two integer operands and one operator from the user, performs the operation and then prints the result. (Consider the operators +,- ,*, /, % and use Switch Statement).
#include <stdio.h>
void main() {
    int a, b, c;
    char ch;
    printf("Enter your operator(+, -, /, *, %)\n");
    scanf("%c", &ch);
    printf("Enter the values of a and b\n");
    scanf("%d%d", &a, &b);
    switch (ch) {
        case '+':
            c = a + b;
            printf("Result is %d", c);
            break;
        case '-':
            c = a - b;
            printf("Result is %d", c);
            break;
        case '*':
            c = a * b;
            printf("Result is %d", c);
            break;
        case '/':
            c = a / b;
            printf("Result is %d", c);
            break;
        case '%':
            c = a % b;
            printf("Result is %d", c);
            break;
        default:
            printf("An error occured!");
            break;
    }
}

// Enter your operator(+, -, /, *, )
// *
// Enter the values of a and b
// 5 8
// multiplication of two numbers is 40