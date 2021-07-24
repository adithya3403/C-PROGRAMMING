#include <stdio.h>
#include <string.h>
int main() {
  char list[80];
  int i=0, t, c, co;
  printf("Enter a word : ");
  scanf("%s", list);
  c=strlen(list);
  t=c-1;
  for ((c=0, co=t); c<=t/2; (++c, --co)) 
  {
    if (list[c]!=list[co])
    {
      i++;
    }
  }
  if (i==0) 
  {
    printf("%s is a palindrome", list);
  }
  else
  {
    printf("%s is not a palindrome", list);
  }
  return 0;
}