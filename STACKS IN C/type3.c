// STACK USING ARRAY IN C
// array is local
// passing array to function WITH pointer
#include <stdio.h>
int top = -1;
void push(int *arr, int x) {
    if (top == 9) {
        printf("Stack Overflow");
        return;
    } else {
        printf("Enter element to be inserted : ");
        scanf("%d", &x);
        top++;
        arr[top] = x;
    }
}
void pop(int *arr) {
    if (top == -1) {
        printf("Stack underflow");
        return;
    } else {
        printf("The popped element is %d\n", arr[top]);
        top--;
    }
}
void display(int *arr) {
    if (top == -1) {
        printf("Stack is empty");
    } else {
        printf("Stack elements are : ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}
int main() {
    int c, x;
    int *arr[10];
    do {
        printf("\nSTACK OPERATIONS\n1.Push\n2.Pop\n3.Display\nEnter choice : ");
        scanf("%d", &c);
        switch (c) {
            case 1:
                push(*arr, x);
                break;
            case 2:
                pop(*arr);
                break;
            case 3:
                display(*arr);
                break;
            default:
                printf("Invalid choice");
        }
    } while (c != 3);
}














