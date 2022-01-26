/*case=1
input=
output=First value: 10                                                                                                         
Second value: 3.140000                                                                                                  
Third value: a */
#include <stdio.h>
#include <stdlib.h>
struct pps {
    int num;
    float n;
    char ch;
};
void main() {
    struct pps *ptr;
    ptr = (struct pps *)malloc(3 * sizeof(struct pps));

    ptr->num = 10;
    ptr->n = 3.140000;
    ptr->ch = 'a';

    printf("First value: %d\n", ptr->num);
    printf("Second value: %f\n", ptr->n);
    printf("Third value: %c\n", ptr->ch);
}