#include "../lib/my.h"

/*
pre: Takes a string of characters
post: Prints the length of the string
*/

int my_strlen(char* c)
{
  int i = 0;
  int len = 0;
  if(c==NULL)
    return -1;
  while(c[i]!='\0')
    {
	  len++;
	  i++;
    }
  return len;
}
