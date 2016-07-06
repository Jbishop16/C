#include "../lib/mylist.h"

/*
pre: Receives a pointer to head of list
post: Removes node at beginning
*/

void* remove_node(t_node** list)
{
  if(list!=NULL && *list!=NULL)
    {
      t_node* temp;
                
      temp = *list;
      *list = (*list)->next;
      temp->next = NULL;
      free(temp);
    }
  /*t_node *cur;
  t_node *temphead;
  if(list==NULL)
    return;
  temphead=*list;
  cur->next=cur->next->next;
  free(temphead);
  temphead=NULL;
  */
}
