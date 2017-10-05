/*
** my_list_add_head.c for libmy in /home/bassintag/c-prog/Libmy
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Thu Oct  5 21:01:50 2017 Antoine Stempfer
** Last update Thu Oct  5 21:08:54 2017 Antoine Stempfer
*/

#include "my.h"

int		my_list_add_head(t_list *list, void *data)
{
  t_llnode	*node;

  node = malloc(sizeof(t_llnode));
  if (node == NULL)
    return (EXIT_FAILURE);
  node->next = list->head;
  node->data = data;
  list->head = node;
  if (list->size == 0)
    list->tail = node;
  list->size += 1;
  return (EXIT_SUCCESS);
}
