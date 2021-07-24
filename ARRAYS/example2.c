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
