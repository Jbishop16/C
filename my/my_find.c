#include "../lib/my.h"

/*
pre: Takes a string and a char
post: Searches for a character and returns a pointer to the character
*/

char* my_find(char* s, char c)
{
  int i;
  if(s!=NULL)
    for(i=0; s[i]!='\0';i++)
      if(c==s[i])
	return &s[i];
  return NULL;   
}
