/*
** my_list_destroy.c for libmy in /home/bassintag/c-prog/Libmy
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Thu Oct  5 20:55:25 2017 Antoine Stempfer
** Last update Thu Oct  5 21:50:36 2017 Antoine Stempfer
*/

#include "my.h"

void		my_list_destroy(t_list *list)
{
  t_llnode	*next;

  list->current = list->head;
  while (list->current != NULL)
    {
      next = list->current->next;
      free(list->current);
      if (list->current->data != NULL)
	free(list->current->data);
      list->current = next;
    }
  free(list);
}
