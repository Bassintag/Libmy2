/*
** my_list_free.c for libmy in /home/bassintag/c-prog/Libmy
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Thu Oct  5 20:49:16 2017 Antoine Stempfer
** Last update Thu Oct  5 21:50:24 2017 Antoine Stempfer
*/

#include "my.h"

void		my_list_free(t_list *list)
{
  t_llnode	*next;

  list->current = list->head;
  while (list->current != NULL)
    {
      next = list->current->next;
      free(list->current);
      list->current = next;
    }
  free(list);
}
