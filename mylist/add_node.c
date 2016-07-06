#include "../lib/mylist.h"

/*
pre: Takes a node and the list
post: Adds a node to the list
*/

void add_node(t_node* node , t_node** list)
{
  if(node == NULL || list == NULL )
    return;
  if(*list==NULL)
    {
      *list=node;
      return;
    }
  node->next=*list;
  *list=node;
}
