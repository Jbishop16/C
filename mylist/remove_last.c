#include "../lib/mylist.h"

/*
pre: Takes a list of nodes
post: Removes the last node in that list
*/

void* remove_last(t_node** list)
{
  t_node* cnode;
  t_node* head;
  if(list!=NULL && *list!=NULL)
    {        
      for(head = *list, cnode = *list; (cnode->next)!=NULL;head = cnode, cnode = cnode->next);
                        
      free(head->next);
      head->next = NULL;
    }
  /* t_node* cur;
  int i;
  if(list==NULL || *list==NULL)
    return;
  if(((t_node*)list)->next==NULL)
    remove_node(list);
  for(i=0;cur->next->next!=NULL;i++)
    cur=cur->next;
  free(cur->next);
  cur->next=NULL;
  */
}
