#include "../lib/my.h"

/*
pre: Nothing is inputted 
post: Prints out the alphabet
*/

void my_alpha()
{
  char i;
  for(i=0;i<26;i++)
    my_char('a'+i);
}
