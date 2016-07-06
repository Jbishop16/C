#include "../lib/my.h"

/*
pre: Takes an integer
post: Allocates memory based on integer
*/

void* xmalloc(int n)
{
  void *p;
  p=malloc(n);
  if(p==0)
    {
      my_str("Virtual Memory Exhausted.\n");
      exit(1);
    }
  return p;
}
