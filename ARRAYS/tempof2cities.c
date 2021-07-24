// C program to store temperature of two cities of a week and display it. 
#include <stdio.h> 
const int CITY = 2; 
const int WEEK = 7; 
void main() 
{ 
    int t[CITY][WEEK];
    for (int i = 0; i < CITY; ++i) 
    { 
        for (int j = 0; j < WEEK; ++j) 
        { 
            printf("City %d, Day %d: ", i + 1, j + 1); 
            scanf("%d", &t[i][j]); 
        } 
    } 
    printf("\nDisplaying values: \n\n"); 
    for (int i = 0; i < CITY; ++i) 
    { 
        for (int j = 0; j < WEEK; ++j) 
        { 
            printf("City %d, Day %d = %d\n", i + 1, j + 1, t[i][j]);  
        } 
    } 
}
