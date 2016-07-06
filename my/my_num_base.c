#include "../lib/my.h"
/*
pre: Takes an integer and string of chars as a base
post: Prints that integer in the form of the base
*/

void my_num_base(int n, char* base)
{
  int r;
  unsigned int e;
  unsigned int u;
  if((r=my_strlen(base))>0)
    {
      if(n<0)
	{
	  my_char('-');
	  u=-n;
	}
      if(r==1)
	while(u-- > 0)
	  my_char(*base);
      else
	{
	  for(e=1;(u/e)>=r;e*=r)
	    ;
	  for(;e;u%=e,e/=r)
	    my_char(base[n/e]);
	}
    }
  else
    my_str("Your base sucks.\n");
}
