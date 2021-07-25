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

// City 1, Day 1: 10
// City 1, Day 2: 20
// City 1, Day 3: 30
// City 1, Day 4: 40
// City 1, Day 5: 50
// City 1, Day 6: 60
// City 1, Day 7: 70
// City 2, Day 1: 11
// City 2, Day 2: 21
// City 2, Day 3: 31
// City 2, Day 4: 41
// City 2, Day 5: 51
// City 2, Day 6: 61
// City 2, Day 7: 71


// Displaying values:

// City 1, Day 1 = 10
// City 1, Day 2 = 20
// City 1, Day 3 = 30
// City 1, Day 4 = 40
// City 1, Day 5 = 50
// City 1, Day 6 = 60
// City 1, Day 7 = 70
// City 2, Day 1 = 11
// City 2, Day 2 = 21
// City 2, Day 3 = 31
// City 2, Day 4 = 41
// City 2, Day 5 = 51
// City 2, Day 6 = 61
// City 2, Day 7 = 71
