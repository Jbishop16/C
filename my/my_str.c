#include "../lib/my.h"

/*
pre: Takes a String
post: Prints it 
*/

void my_str(char* c)
{
  int i;
  i=0;
  if(c==NULL)
    return;
  while (c[i])
    {
      for(i=0;c[i];i++)
	my_char(c[i]);
    }
}
