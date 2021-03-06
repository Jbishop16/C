#include "../lib/my.h"

/*
pre: Takes two strings and an integer as input
post: Compares the two strings with the desired number of characters and gives the difference between the two
*/

int my_strncmp(char* s1, char* s2, int n)
{
  int i = 0;
  if(s1==NULL && s2==NULL || n<=0)
    return 0;
  if(s1==NULL)
    return -1;
  if(s2==NULL)
    return 1;
  while(s1[i]!='\0' && s2[i]!='\0' && i<n)
    {
      if(s1[i]!=s2[i])
	return (int)(s1[i]-s2[i]);
      i++;
    }
  return 0;
}
