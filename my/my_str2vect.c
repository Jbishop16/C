#include "../lib/my.h"
/*
pre: Takes a string 
post: Returns a vector
*/

char** my_str2vect(char* string)
{
  unsigned int i;
  char flag;// it will receive a 0 or 1
  unsigned int s=0;
  unsigned int w;
  unsigned int index;
  unsigned int snum;

  for(; *(string) == ' ' || *(string) == '\t'; string++); //space consideration
  for(s=1, i=0, flag=1; string[i]!='\0'; i++) //looping through
    {
      if(string[i] == ' ' || string[i] == '\t') //checking for a space in the string
	{
	  if(flag==1)
	    flag=0;
	}
      else if(string[i] != ' ' && string[i] != '\t') //this reacts if there is no space
	{
	  if(flag==0)
	    {
	      flag=1;
	      s++;
	    }
	}
    }
  snum=s;
  char** vect = (char**)xmalloc((s+1)*sizeof(char*)); //here is a vector
  for(index=0, w=0, s=0, i=0, flag=1; string[i]!='\0'; i++)//the index, counters start at 0, flag is true, traverse string
    {
      if(string[i] == ' ' || string[i] == '\t')// check for space
	{
	  if(flag==1)
	    {
	      flag=0;//flag is now false, work on the word in this code
	      vect[s] = (char*)xmalloc(sizeof(char)*(w+1));
	      vect[s++] = my_strnconcat(&string[index],"\0", w);
	    }
	}
      else if(string[i] != ' ' && string[i] != '\t')// this is not a space, so do this
	{
	  if(flag==0)
	    {
	      flag=1;
	      w=0;
	      index = i;
	    }
	  w++;
	}
    }
  vect[s] = (char*)xmalloc(sizeof(char)*(w+1));
  vect[s++] = my_strnconcat(&string[index],"\0", w);
  vect[snum] = NULL;
  return vect;
}
