#include "../lib/my.h"

/*
pre: Inputs two strings and then an integer
post: Copies the second string into the first with the desired number of characters
*/

char* my_strncpy(char* tgt, char* src, int n)
{
  int i;
  int length = my_strlen(src);
  if(src==NULL || src[0]=='\0' || n<=0)
    {
      tgt[0]='\0';
      return tgt;
    }
  if(n>length)
    n=length;
  for(i=0; i<n;i++)
    {
      tgt[i]=src[i];
    }
  return tgt;
}
