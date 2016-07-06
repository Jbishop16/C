#include "../lib/mylist.h"

/*
pre: Receives a pointer to the specified location in list
post: Removes the node from that location
*/

void* remove_node_at(t_node** list, int index)
{
  t_node* temp;
  t_node* head;
  if(list!=NULL && *list!=NULL)        
    {
      if(index<1)
	remove_node(list);
      else if(index>count_nodes(*list))
	remove_last(list);
      else
	{
	  my_str("Does it fault?");
	  for(temp = *list; 0<index;temp = temp->next, index--);
	  my_str("Does it fault?");        
	  head = temp->next;
	  temp->next = (temp->next)->next;
	  head->next = NULL;
	  free(head);
	}
    }
}
