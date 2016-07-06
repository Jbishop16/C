#include "../lib/mylist.h"

/*
pre: Takes a node, a list, and a specified location in the list
post: Adds a node at the specified location in the list
*/

void add_node_at(t_node* node, t_node** list, int index)
{
  int i;
  t_node* cur;
  if(node == NULL || list == NULL)
    return;
  if(*list==NULL)
    {
      *list=node;
      return;
    }
  if(index<0 || ((t_node*)list)->next==NULL)
    add_node(node,list);
  for(i=0;i<index,cur->next->next!=NULL;i++)
    cur=cur->next;
  node->next=cur->next;
  cur->next=node;
}
