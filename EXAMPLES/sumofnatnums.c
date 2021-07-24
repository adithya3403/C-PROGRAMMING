#include <stdio.h>
int main()
{
    int num, count, total=0;
    printf("enter a num : ");
    scanf("%d", &num);
    for (count = 1; count <= num; count++)
    {
        total+=count;
    }
    printf("total = %d", total);
    return 0;
    
    
}

