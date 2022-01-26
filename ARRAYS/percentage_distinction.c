/*Write a c program that declares Class awarded for a given percentage of marks and Read percentage from standard input
case=1
input=70
40
55        
68        
49
output=
Enter five subjects marks:                                                                                            
Percentage = 56.40                                                                                                      
Second Class*/

#include <stdio.h>
void main() {
    int a, b, c, d, e;
    printf("Enter five subjects marks:");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    float p;
    p = (a + b + c + d + e) / 5.0;
    printf("Percentage = %0.2f\n", p);

    if (p > 70) {
        printf("Distinction");
    } else if (p <= 40) {
        printf("Failed");
    } else if (p < 60 && p > 40) {
        printf("Second Class");
    } else if (p <= 70 && p > 40) {
        printf("First Class");
    }
}