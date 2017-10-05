/*
** my_list_get.c for libmy in /home/bassintag/c-prog/Libmy
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Thu Oct  5 21:58:57 2017 Antoine Stempfer
** Last update Thu Oct  5 22:10:07 2017 Antoine Stempfer
*/

#include "my.h"

void	*my_list_get(t_list *list, int index)
{
  if (list->size <= index)
    return (NULL);
  list->current = list->head;
  while (index > 0)
    {
      list->current = list->current->next;
      index -= 1;
    }
  return (list->current->data);
}
