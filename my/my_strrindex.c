#include "../lib/my.h"

/*
pre: Takes a string of characters and a character
post: Prints how many times that character is not located in the string
*/

int my_strrindex(char* s, char c)
{
  int i;
  int ret = -1;
  if(s!=NULL)
    for(i=0; s[i]!='\0'; i++)
      if(s[i]==c)
	ret=i;
  return ret;
}
