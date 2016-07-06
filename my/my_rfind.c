#include "../lib/my.h"

/*
pre: Takes a string and a char
post: Searches for a character and returns how many time a character isn't in a string
*/

char* my_rfind(char* s, char c)
{
  int i;
  int ret = -1;
  if(s==NULL)
    return NULL;
  for(i=0; s[i]!='\0'; i++)
    if(c==s[i])
      ret=i;
  return &s[ret];
}
