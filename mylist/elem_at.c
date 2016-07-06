#include "../lib/mylist.h"

/*
pre: Takes a node and the index
post: Returns the element in that node
*/

void* elem_at(t_node* node, int index)
{
  int i;
  t_node* cur;
  if(node == NULL)
    return;
  if(index<=0)
    return node->elem;
  for(i=0;i<index,cur->next->next!=NULL;i++)
    cur=cur->next;
  return cur->elem;
}
