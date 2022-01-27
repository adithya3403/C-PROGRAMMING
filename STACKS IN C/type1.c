// STACK USING ARRAY IN C
// array is global
// no arguments are passed to functions
#include <stdio.h>
int arr[10];
int top = -1;
void push() {
    if (top == 9) {
        printf("Stack Overflow");
    } else {
        int x;
        printf("Enter value : ");
        scanf("%d", &x);
        top++;
        arr[top] = x;
    }
}
void pop() {
    if (top == -1) {
        printf("Stack underflow");
    } else {
        printf("The popped element is %d\n", arr[top]);
        top--;
    }
}
void display() {
    if (top >= 0) {
        printf("Stack elements are : ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("\nStack is empty");
    }
}
int main() {
    int c;
    do {
        printf("\nSTACK OPERATIONS\n1.Push\n2.Pop\n3.Display\nEnter choice : ");
        scanf("%d", &c);
        switch (c) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            default:
                printf("Invalid choice");
        }
    } while (c != 3);
}
