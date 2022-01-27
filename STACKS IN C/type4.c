// STACK USING ARRAY IN C
// using struct
#include <stdio.h>
#include <stdlib.h>
struct Stack {
    int arr[10];
    int top;
} s;
// struct Stack s;
void push() {
    if (s.top == 9) {
        printf("Stack is full");
        return;
    } else {
        int x;
        printf("Enter the element to be pushed : ");
        scanf("%d", &x);
        s.arr[s.top] = x;
        s.top += 1;
    }
}
int pop() {
    if (s.top == -1) {
        printf("Stack is empty");
        return -1;
    } else {
        s.top -= 1;
        int x = s.arr[s.top];
        return x;
    }
}
void display() {
    if (s.top == -1) {
        printf("Stack is empty");
        return;
    } else {
        printf("Stack elements are : ");
        for (int i = s.top - 1; i >= 0; i--) {
            printf("%d ", s.arr[i]);
        }
    }
    printf("\n");
}
int main() {
    int c, x, a;
    struct Stack s;
    do {
        printf("\nSTACK OPERATIONS\n1.Push\n2.Pop\n3.Display\nEnter choice : ");
        scanf("%d", &c);
        switch (c) {
            case 1:
                push();
                break;
            case 2:
                a = pop();
                if (a != -1) {
                    printf("The popped element is %d\n", a);
                }
                break;
            case 3:
                display();
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (c != 3);
}