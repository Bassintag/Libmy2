/*
** my_memset.c for libmy in /home/bassintag/c-prog/Libmy
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Wed Oct  4 21:00:56 2017 Antoine Stempfer
** Last update Wed Oct  4 21:03:34 2017 Antoine Stempfer
*/

#include "my.h"

void	*my_memset(void *str, int c, size_t n)
{
  char	*destp;

  destp = str;
  while (n > 0)
    {
      destp[0] = c;
      destp += 1;
      n -= 1;
    }
  return (str);
}
