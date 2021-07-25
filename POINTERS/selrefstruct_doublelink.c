#include <stdio.h>
struct node {
    int data;
    struct node* prev_link;
    struct node* next_link;
};
void main() {
    struct node ob1; // Node1 initialization
    ob1.prev_link = NULL;
    ob1.next_link = NULL;
    ob1.data = 10;
    struct node ob2; // Node2
    // Initialization
    ob2.prev_link = NULL;
    ob2.next_link = NULL;
    ob2.data = 20;
    struct node ob3; // Node3
    // Initialization
    ob3.prev_link = NULL;
    ob3.next_link = NULL;
    ob3.data = 30;
    // Forward links
    ob1.next_link = &ob2;
    ob2.next_link = &ob3;
    // Backward links
    ob2.prev_link = &ob1;
    ob3.prev_link = &ob2;
    // Accessing  data of ob1, ob2 and ob3 by ob1
    printf("%d\t", ob1.data);
    printf("%d\t", ob1.next_link->data);
    printf("%d\n", ob1.next_link->next_link->data);
    // Accessing data of ob1, ob2 and ob3 by ob2
    printf("%d\t", ob2.prev_link->data);
    printf("%d\t", ob2.data);
    printf("%d\n", ob2.next_link->data);
    // Accessing data of ob1, ob2 and ob3 by ob3
    printf("%d\t", ob3.prev_link->prev_link->data);
    printf("%d\t", ob3.prev_link->data);
    printf("%d", ob3.data);
}

// 10      20      30
// 10      20      30
// 10      20      30