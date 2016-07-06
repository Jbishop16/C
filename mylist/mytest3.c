#include "../lib/mylist.h"

int main()
{
  int arr[10] = {4, 65, 32, 1, 68, 23, 83, 12, 6, 82};
  t_node *head;
  int i;
  int n;
  int *pi;

  head = NULL;
  for (i = 0; i < 5; i++)
    add_node(new_node(&arr[i], NULL), &head);
  my_str("Add node working\n");
  for (; i < 10; i++)
    add_elem(&arr[i], &head);
  my_str("Add elem working\n");
  traverse_int(head);
  my_char('\n');
  n = 5;
  add_node_at(new_node(&n, NULL), &head, 2);
  traverse_int(head);
  my_char('\n');
  my_str("add node at working\n");
  add_node(new_node(&n, NULL), &head);
  add_node_at(new_node(&n, NULL), &head, 0);
  add_node_at(new_node(&n, NULL), &head, 34);
  my_str("add node also working\n");
  append(new_node(&n, NULL), &head);
  my_str("append working\n");
  pi = (int*)remove_node(&head);
  my_str("remove node working\n");
  my_str("my int doesn't work?!?!?!\n");
  my_int(*pi);
  my_str("Move on 1\n");
  my_char('\n');
  traverse_int(head);
  my_str("Move on 2\n");
  my_char('\n');
  pi = (int*)remove_node_at(&head, 4);
  my_str("remove node at working\n");
  my_int(*pi);
  my_char('\n');
  traverse_int(head);
  my_char('\n');
  pi = (int*)remove_node_at(&head, 0);
  my_int(*pi);
  my_char('\n');
  pi = (int*)remove_node_at(&head, 35);
  my_int(*pi);
  my_char('\n');
  traverse_int(head);
  my_char('\n');
  pi = (int*)remove_last(&head);
  my_int(*pi);
  my_char('\n');
  traverse_int(head);
  my_char('\n');
  my_int(count_nodes(head));
  my_char('\n');
  empty_list(&head);
  traverse_int(head);
  my_str("This is the end of the test.\n");
  return 0;
}
