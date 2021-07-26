#include<stdio.h>
int main()
{
	int i,j,k;               
	int arr[3][3][3];        
	printf("enter the elements: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("element at [%d][%d][%d]: ",i,j,k);
				scanf("%d",&arr[i][j][k]);
			}
		}
	}
	printf("\nprinting 3D array\n");
	for(i=0;i<2;i++)                       
	{   
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("%d ",arr[i][j][k]);	
			}
			printf("\n");
		}
		printf("\n");
	}
	printf("\ncopying values in new 2D array: \n");
	printf("\nprinting elements in first 2D array: \n");
    for ( j = 0; j < 3; j++)
    {
        for ( k = 0; k < 3; k++)
        {
            printf("%d ", arr[0][j][k]);
        }
        printf("\n");
    }
	printf("\nprinting elements in second 2D array: ");
    for ( j = 0; j < 3; j++)
    {
        for ( k = 0; k < 3; k++)
        {
            printf("%d ", arr[1][j][k]);
        }
        printf("\n");
    }
	return 0;				
}

/*
write code here
input:
enter the elements:                                                                                                     
element at [0][0][0]: 10                                                                                                
element at [0][0][1]: 20                                                                                                
element at [0][0][2]: 30                                                                                                
element at [0][1][0]: 40                                                                                                
element at [0][1][1]: 50                                                                                                
element at [0][1][2]: 60                                                                                                
element at [0][2][0]: 70                                                                                                
element at [0][2][1]: 80                                                                                                
element at [0][2][2]: 90                                                                                                
element at [1][0][0]: 11                                                                                                
element at [1][0][1]: 21                                                                                                
element at [1][0][2]: 31                                                                                                
element at [1][1][0]: 41                                                                                                
element at [1][1][1]: 51                                                                                                
element at [1][1][2]: 61                                                                                                
element at [1][2][0]: 71                                                                                                
element at [1][2][1]: 81                                                                                                
element at [1][2][2]: 91                                                                                                
output
printing 3D array                                                                                                       
10 20 30                                                                                                                
40 50 60                                                                                                                
70 80 90

11 21 31                                                                                                                
41 51 61                                                                                                                
71 81 91                                                                                                                


copying values in new 2D array:                                                                                         

printing elements in first 2D array:                                                                             
10 20 30                                                                                                                
40 50 60                                                                                                                
70 80 90                                                                                                                


printing elements in second 2D array: 11 21 31                                                                          
41 51 61                                                                                                                
71 81 91 
*/
