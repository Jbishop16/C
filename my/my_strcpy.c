#include "../lib/my.h"

/* 
pre: Takes two separate strings
post: Overwrites the first string with the second and returns the first
*/

char* my_strcpy(char* tgt, char* src)
{
  int i;
  if(src==NULL || src[0]=='\0')
    {
      tgt[0]='\0';
      return tgt;
    }
  for(i=0;src[i]!='\0';i++)
    {
      tgt[i]=src[i];
    }
  tgt[i]='\0';
  return tgt;
}
