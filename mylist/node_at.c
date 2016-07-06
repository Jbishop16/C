#include "../lib/mylist.h"

/*
pre: Takes a node and the index
post: Returns that node
*/

t_node* node_at(t_node* node, int index)
{
  int i;
  t_node* cur;
  if(node == NULL || index<0)
    return;
  for(i=0;i<index,cur->next->next!=NULL;i++)
    cur=cur->next;
  return cur;
}
