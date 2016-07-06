#include "../lib/my.h"

/*
pre: Takes two strings as input
post: Compares the strings and returns the difference of the strings
*/

int my_strcmp(char* s1, char* s2)
{
  int i;
  if(s1==NULL && s2==NULL)
    return 0;
  if(s1==NULL)
    return -1;
  if(s2==NULL)
    return 1;
  while(s1[i]!='\0' && s2[i]!='\0')
    {
      if(s1[i]!=s2[i])
	break;
      i++;
    }
  return s1[i]-s2[i];
}
