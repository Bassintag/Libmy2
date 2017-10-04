/*
** my_memchr.c for libmy in /home/bassintag/c-prog/Libmy
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Wed Oct  4 21:14:21 2017 Antoine Stempfer
** Last update Wed Oct  4 21:18:23 2017 Antoine Stempfer
*/

#include "my.h"

void		*my_memchr(const void *str, int c, size_t n)
{
  const char	*strp;

  if (n == 0)
    return (NULL);
  strp = str;
  if (strp[0] == c)
    return ((void *)str);
  return (my_memchr(strp + 1, c, n - 1));
}
