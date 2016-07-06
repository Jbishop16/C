#include "../lib/my.h"

/* pre: receives a char
   post: prints it */

void my_char(char c)
{
  write(1,&c,1);
}
