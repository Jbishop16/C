#include "../lib/my.h"

/*
pre: Takes a vector as input
post: Converts the vector to a string
*/

char* my_vect2str(char**vect)
{
  int i, j;
  int size;
  size = 0;
  char *str;
  
  for(i = 0; vect[i] != NULL; i++)
    size += my_strlen(vect[i]) + 1;
  
  str = (char *) xmalloc(size*(sizeof(char)));
  
  for(i=0, j=0; vect[i] != NULL; i++)
    {
      my_strcpy(&str[j], vect[i]);
      j += my_strlen(vect[i]) + 1;
    }
  
  for(i = 0; i < size-1; i++)
    {
      if(str[i] == '\0')
	str[i] = ' ';
    }
  
  return str;
  /*  int count;
  int i, j;
  char* ret;

  for(i = 0, count = 0; vect[i] !=NULL; i++, count+= my_strlen(vect[i])+1);

  ret = xmalloc((sizeof(char)* count));
  for(i=0, j=0; vect[i]!=NULL; i++)
    {
      ret = my_strcat(ret, vect[i]);
      //ret = my_strcat(ret, " ");
    }

  //ret = my_strcat(ret,"\0");

  return ret;
  */
}
