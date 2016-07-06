#include "../lib/my.h"

/* 
pre: Inputs nothing.
post: Prints the Digits.
*/

void my_digits()
{
  char i;
  for(i=0;i<=9;i++)
    my_char('0'+i);
}
