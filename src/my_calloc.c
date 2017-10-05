/*
** my_calloc.c for libmy in /home/bassintag/c-prog/Libmy
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Thu Oct  5 20:46:42 2017 Antoine Stempfer
** Last update Thu Oct  5 20:47:45 2017 Antoine Stempfer
*/

#include "my.h"

void	*my_calloc(size_t size)
{
  void	*p;

  p = malloc(size);
  if (p == NULL)
    return (NULL);
  my_memset(p, 0, size);
  return (p);
}
