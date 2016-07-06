#include "../lib/mylist.h"

/*
pre: Takes a node
post: Traverse the chars in that node and prints them
*/

void traverse_char(t_node* node)
{
  if(node == NULL)
    return;
  while(node!=NULL)
    {
    my_char(*(char*)node->elem);
    my_char(' ');
    node->next;  
    }
}
