#include "../lib/my.h"

/*
pre: Takes a string of characters and a character as input
post: Prints the amount of times that char is located in the string
*/

int my_strindex(char* s, char c)
{
  int i;
  if(s!=NULL)
    for(i=0; s[i]!='\0';i++)
      if(s[i]==c)
	return i;
  return -1;    
}
