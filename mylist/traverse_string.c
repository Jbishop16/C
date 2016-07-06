#include "../lib/mylist.h"

/*
pre: Takes a node
post: Traverse the strings in that node and prints them
*/

void traverse_string(t_node* node)
{
  if(node == NULL)
    return;
  while(node!=NULL)
    {
      my_str(*(char**)node->elem);
      my_char(' ');
      node->next;
    }
}
