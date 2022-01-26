#include <stdio.h>
typedef struct complex {
    double real;
    double imag;
} complex;
int main() {
    complex c1 = {.real = 10.1, .imag = 9.3};
    complex c2 = {.real = 15.2, .imag = 5.5};
    complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    printf("Result is %0.2lf+%0.2lfi", result.real, result.imag);
    return 0;
}