#include "../lib/mylist.h"

/*
pre: Takes a node and a list of nodes
post: Adds the node at the end of the list
*/

void append(t_node* node, t_node** list)
{
  t_node* cnode;
  if(node!=NULL && list!=NULL)
    {
      for(cnode = *list; cnode->next!=NULL; cnode = cnode->next);
      cnode->next = node;        
    }
}
