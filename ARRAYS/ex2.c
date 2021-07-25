#include <stdio.h> 
void main ()  
{ 
    int n[10];
    for (int i = 0; i < 10; i++ )  
    { 
        n[i] = i + 100; 
    } 
    for (int i = 0; i < 10; i++ ) 
    { 
        printf("Element[%d] = %d\n", i, n[i] );  
    }  
}

// output
// Element[0] = 100
// Element[1] = 101
// Element[2] = 102
// Element[3] = 103
// Element[4] = 104
// Element[5] = 105
// Element[6] = 106
// Element[7] = 107
// Element[8] = 108
// Element[9] = 109