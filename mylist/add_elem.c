#include "../lib/mylist.h"

/*
pre: Takes an element and a list of nodes
post: Adds an element to the head of list
*/

void add_elem(void* elem, t_node** list)
{
  if(list!=NULL && elem!=NULL)
    {        
      t_node* n = new_node(elem, *list);
      *list = n;
    }
  //  add_node(new_node(elem, NULL), list);  
}
