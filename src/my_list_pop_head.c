/*
** my_list_pop_head.c for libmy in /home/bassintag/c-prog/Libmy
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Thu Oct  5 21:16:55 2017 Antoine Stempfer
** Last update Thu Oct  5 21:23:06 2017 Antoine Stempfer
*/

#include "my.h"

void		*my_list_pop_head(t_list *list)
{
  t_llnode     	*node;
  void		*data;

  if (list->head == NULL)
    return (NULL);
  node = list->head;
  data = node->data;
  list->head = node->next;
  free(node);
  if (list->size == 1)
    {
      list->current = NULL;
      list->tail = NULL;
    }
  list->size -= 1;
  return (data);
}
