#include <stdio.h>
int isPrimeNumber(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
        return 1;
    }
}
int main() {
    int n, isPrime;
    printf("Enter number : ");
    scanf("%d", &n);
    isPrime = isPrimeNumber(n);
    if (isPrime == 1) {
        printf("%d is a prime number", n);
    } else {
        printf("%d is not a prime", n);
    }
    return 0;
}