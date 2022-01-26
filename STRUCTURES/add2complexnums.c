// Write a c program to read , add two complex numbers and display the result. Where as structure declaration in global scope use typedef declaration style.

#include <stdio.h>
typedef struct
{
    int real;
    int imag;
} COMPLEX;
COMPLEX C1, C2, Result_C;
void main() {
    printf("\n Enter the real and imaginary parts of the first complex number:   ");
    scanf("%d%d", &C1.real, &C1.imag);
    printf("\n Enter the real and imaginary parts of the second complex number:   ");
    scanf("%d%d", &C2.real, &C2.imag);
    Result_C.real = C1.real + C2.real;
    Result_C.imag = C1.imag + C2.imag;
    printf("\n");
    printf(" \n The sum of two complex numbers is: %d + %di", Result_C.real, Result_C.imag);
}

// input
//  Enter the real and imaginary parts of the first complex number:   2 2
//  Enter the real and imaginary parts of the second complex number:   2 2
// output
//  The sum of two complex numbers is: 4 + 4i