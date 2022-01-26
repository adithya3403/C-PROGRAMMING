/*case=1
input=
output=Enter number of elements: 5                                                                                             
Memory successfully allocated using malloc.                                                                             
Malloc Memory successfully freed.                                                                                       
                                                                                                                        
Memory successfully allocated using calloc.                                                                             
Calloc Memory successfully freed.*/

#include <stdio.h>
#include <stdlib.h>
int main() {
    int *p1, *p2;
    int n = 5;
    printf("Enter number of elements: 5\n");
    p1 = (int *)malloc(n * sizeof(int));
    p2 = (int *)calloc(n, sizeof(int));
    if (p1 == NULL) {
        if (p2 == NULL) {
            exit(0);
        }
    } else {
        printf("Memory successfully allocated using malloc.\n");
        free(p1);
        printf("Malloc Memory successfully freed.\n");

        printf("\nMemory successfully allocated using calloc.\n");
        free(p2);
        printf("Calloc Memory successfully freed.\n");
    }
}