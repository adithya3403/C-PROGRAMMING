#include <stdio.h>
#include <ctype.h>  
int isdigit(int); 
int main() {
  char c='7';
  if (isdigit(c)) 
  {
    printf("%c is number", c);
  }
  else
  {
    printf("%c is not number", c);
  }
  
  return 0;
}