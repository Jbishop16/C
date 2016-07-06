#include "../lib/my.h"

/*
pre: Takes two strings as input
post: Returns a combined string of the two inputted strings. No allocation should be needed.
*/

char* my_strcat(char* s1, char* s2)
{
  int length;
  int count;
  if(s1==NULL && s2==NULL)
    return NULL;
  if(s1==NULL)
    return s2;
  if(s2==NULL)
    return s1;
  else
    {
     length = my_strlen(s1);
     count=0;
     for(count=0; s2[count]!='\0'; count++)
       s1[length+count] = s2[count];
     s1[count+length] = '\0';
    }
  return s1;
}
