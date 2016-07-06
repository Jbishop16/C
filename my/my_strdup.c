#include "../lib/my.h"

/*
pre: Inputs a string
post: Duplicates it
*/

char* my_strdup(char* c)
{
  char* d = xmalloc(my_strlen(c)+1);
  if(d==NULL)
    return NULL;
  my_strcpy(d,c);
  return d;
}
