#include "../lib/my.h"

/*
pre: Takes two strings and an integer as input
post: Returns the entire first string and only the specified first amount of characters in the second string into a newly allocated string.
*/

char* my_strnconcat(char* s1, char* s2, int n)
{
  int count = 0;
  int length;
  char* ret = NULL;
  if(s1==NULL && s2== NULL)
    return NULL;
  else
    {
      int count = 0;
      length = my_strlen(s2)+my_strlen(s1)-1;
      if (length>=n)
	length = n;
      if(length<1)
	length = 1;
      ret=(char*)xmalloc(length*sizeof(char));
      if(s1!=NULL)
	for(; *s1!='\0' && count<n;(s1)++)
	  ret[count++] = *s1;
      if(s2!=NULL)
	for(;*s2!='\0' && count<n; s2++)
	  ret[count++] = *s2;
      ret[++count] = '\0';
    }
  return ret;
}
