/*write a c program to insert n integers and dislay using malloc()
case=1
input=
1                                                                                                                       
10
output=enter no.of integers                                                                                                    
enter an integer                                                                                                        
10
case=2
input=
2                                                                                                                       
10
20
output=enter no.of integers                                                                                                    
enter an integer                                                                                                        
10 20*/


#include <stdio.h>
#include<stdlib.h>
void main() {
    int n, *ptr;
    printf("enter no.of integers\n");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    for (int i = 0  ; i < n ; i++) {
        printf("enter an integer\n");
        scanf("%d", &*(ptr+i));
    } for (int i = 0 ; i < n ; i++) {
        printf("%d ", *(ptr+i));
    }
}