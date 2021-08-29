// Write a C program that sorts the given array of integers using insertion sort in ascending order .
# include <stdio.h>
void main()
{
    int n, array[1000], c, d, t;
    printf("Enter number of elements : ");
    scanf("%d", &n);
    printf("Enter %d integers : ", n);
    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);
    for (c = 1 ; c <= n - 1; c++)
    {
        d = c;
        while ( d > 0 && array[d-1] > array[d])
        {
            t = array[d];
            array[d] = array[d-1];
            array[d-1] = t;
            d--;
        }
    }
    printf("Sorted list in ascending order : ");
    for (c = 0; c <= n - 1; c++)
        printf("%d ", array[c]);
}

// Enter number of elements : 6
// Enter 6 integers : 1 2 5 3 4 6
// Sorted list in ascending order : 1 2 3 4 5 6
