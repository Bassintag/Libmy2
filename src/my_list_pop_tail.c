/*
** my_list_pop_tail.c for libmy in /home/bassintag/c-prog/Libmy
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Thu Oct  5 21:25:00 2017 Antoine Stempfer
** Last update Thu Oct  5 21:55:59 2017 Antoine Stempfer
*/

#include "my.h"

void		*my_list_pop_tail(t_list *list)
{
  t_llnode     	*node;
  void		*data;

  if (list->tail == NULL)
    return (NULL);
  node = list->tail;
  data = node->data;
  if (list->size == 1)
    {
      list->current = NULL;
      list->head = NULL;
    }
  else
    {
      list->current = list->head;
      while (list->current->next->next != NULL)
	list->current = list->current->next;
      list->current->next = NULL;
    }
  list->tail = list->current;
  free(node);
  list->size -= 1;
  return data;
}
