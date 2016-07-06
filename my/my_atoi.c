#include "../lib/my.h"

/*
pre: Takes a string
post: Returns the integer value of the characters. Basically converts them for that signal project
*/

int my_atoi(char* s)
{
  int i;
  int ret;
  char flag=1;
  if(s[0] == '-')
    {
      flag = -1;
      s = &s[1];
    }
  for(i=0, ret =0 ; s[i]!='\0' && s[i]!='.'; i++)
    {
      ret *= 10;
      ret += s[i] -  '0';
    }
  return ret*flag;
}
