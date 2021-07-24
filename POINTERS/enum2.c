#include <stdio.h>  
enum year{Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};
void main()
{
    for (int i=Jan; i<=Dec; i++)
        printf("%d ", i);
}
