#include <stdio.h>

int main() {
  int arr[5]={3,-4,-8,9,1}, largest;
  for (int i = 0; i < 5; i++)
  {
    if (arr[0]<arr[i])  
    {
      arr[0]=arr[i];
    }
  }
  printf("Largest element is %d\n", arr[0]);
  for (int i = 0; i < 5; i++)
  {
    if (arr[0]>arr[i])  
    {
      arr[0]=arr[i];
    }
  }
  printf("Samllest element is %d\n", arr[0]);
  return 0;
}