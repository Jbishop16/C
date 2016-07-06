#include "../lib/my.h"

/*
pre: Takes two strings as input
post: Returns a new combined string of the inputs after allocating enough room for it
*/

char* my_strconcat(char* s1, char* s2)
{
  int count;
  int length;
  char* ret = NULL;
  if(s1==NULL && s2== NULL)
    return NULL;
  if(s1==NULL)
    return s2;
  if(s2==NULL)
    return s1;
  else
    {
      length = my_strlen(s2)+my_strlen(s1)-1;
      ret=(char*)xmalloc(length*sizeof(char));

      for(count=0; *s1!='\0';(s1)++)
	ret[count++] = *s1;

      for(;*s2!='\0'; s2++)
	ret[count++] = *s2;
      ret[++count] = '\0';
    }
  return ret;
}
