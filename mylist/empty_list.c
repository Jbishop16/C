#include "../lib/mylist.h"

/*
pre: Takes a list of nodes
post: Empties the list of nodes
*/

void empty_list(t_node** list)
{
  if(list == NULL)
    return;
  while(*list!=NULL)
    remove_node(list);
}
