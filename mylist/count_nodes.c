#include "../lib/mylist.h"

/*
pre: Takes a node as input
post: Counts the nodes and returns the number
*/

int count_nodes(t_node* node)
{
  int i = 0;
  if(node != NULL)
    {
      for(; node->next!=NULL; node = node->next, i++);
      i++;
    }
  return i;
  /*  int i = 0;
  while(node!=NULL)
    {
      node=node->next;
      i++;
    }
  return i;
  */
}
