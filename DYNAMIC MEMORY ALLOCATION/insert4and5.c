/*
case=1
input=10
20
30
40 
50
60
70
80
90
output=Initial size of the array is 4                                                                                          
                                                                                                                        
Enter element at index 0:                                                                                               
                                                                                                                      
Enter element at index 1:                                                                                               
                                                                                                                      
Enter element at index 2:                                                                                               
                                                                                                                     
Enter element at index 3:                                                                                               
                                                                                                                     
                                                                                                                        
Increasing the size of the array by 5 elements ...                                                                      
                                                                                                                        
Enter 5 more integers                                                                                                   
                                                                                                                        
Enter element at index 4:                                                                                               
                                                                                                                      
Enter element at index 5:                                                                                               
                                                                                                                      
Enter element at index 6:                                                                                               
                                                                                                                      
Enter element at index 7:                                                                                               
                                                                                                                     
Enter element at index 8:                                                                                               
Final array:                                                                                                            
                                                                                                                        
10                                                                                                                      
20                                                                                                                      
30                                                                                                                      
40                                                                                                                      
50                                                                                                                      
60                                                                                                                      
70                                                                                                                      
80                                                                                                                      
90*/

#include <stdio.h>
#include <stdlib.h>
void main() {
    int *p;
    p = (int *)malloc(4 * sizeof(int));
    printf("Initial size of the array is 4\n");
    for (int i = 0; i < 4; i++) {
        printf("\nEnter element at index %d: ", i);
        scanf("%d", &*(p + i));
    }
    printf("\n\nIncreasing the size of the array by 5 elements ...\n");
    printf("\nEnter 5 more integers\n");
    p = (int *)realloc(p, 9);
    for (int i = 4; i < 9; i++) {
        printf("\nEnter element at index %d:", i);
        scanf("%d", &*(p + i));
    }
    printf("Final array:\n\n");
    for (int i = 0; i < 9; i++) {
        printf("%d\n", *(p + i));
    }
}
