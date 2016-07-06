#include "../lib/my.h"

/*
pre: Takes a string of characters
post: Prints the string in reverse
*/

int my_revstr(char* c)
{
  char temp;
  int i=0;
  int len=my_strlen(c);
  int end;
  int half = len/2;

  if(c==NULL)
    return -1;
  for(i;i<half;i++)
    {
      end=len-1-i;
      temp = c[i];
      c[i]=c[end];
      c[end]=temp;
    }
  my_str(c);
  return len;
}
