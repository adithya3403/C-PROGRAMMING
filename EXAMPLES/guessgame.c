#include <stdio.h>
int main() {
    int number = 39, guess;
    printf("Enter a number between 1 and 50 : ");
    while (1) {
        scanf("%d", &guess);
        if (guess > number) {
            printf("Wrong!\nEnter a smaller number : ");
        } else if (guess < number) {
            printf("Wrong!\nEnter a larger number : ");
        } else {
            printf("Congratulations!\nCorrect guess\n");
            break;
        }
    }
    return 0;
}