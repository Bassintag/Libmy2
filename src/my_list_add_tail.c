/*
** my_list_add_tail.c for libmy in /home/bassintag/c-prog/Libmy
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Thu Oct  5 21:09:41 2017 Antoine Stempfer
** Last update Thu Oct  5 21:14:44 2017 Antoine Stempfer
*/

#include "my.h"

int		my_list_add_tail(t_list *list, void *data)
{
  t_llnode	*node;

  node = my_calloc(sizeof(t_llnode));
  if (node == NULL)
    return (EXIT_FAILURE);
  node->data = data;
  if (list->tail !=  NULL)
    list->tail->next = node;
  else
    list->head = node;
  list->tail = node;
  list->size += 1;
  return (EXIT_SUCCESS);
}
