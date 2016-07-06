#include "../lib/mylist.h"

/*
pre: Takes a node
post: Traverse the ints in that node and prints them
*/

void traverse_int(t_node* node)
{
  if(node!=NULL)        
    for(; node!=NULL; node = node->next)
      my_int(*((int*)(node->elem)));
  /*  if(node == NULL)
    return;
  while(node!=NULL)
    {
      my_int(*(int*)node->elem);
      my_char(' ');
      node->next;
    }
  */
}
