#include <stdio.h>
int main() {
  int n, a[100], sum=0;
  float avg;
  printf("Enter value of n:");
  scanf("%d", &n);
  printf("Enter the elements of array : ");
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);
  for (int i = 0; i < n; i++)
    sum+=a[i];
  avg=(float)sum/n;
  printf("Average = %0.3f", avg);
  return 0;
}
