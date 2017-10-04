/*
** my_memcpy.c for libmy in /home/bassintag/c-prog/Libmy
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Wed Oct  4 20:53:09 2017 Antoine Stempfer
** Last update Wed Oct  4 21:04:56 2017 Antoine Stempfer
*/

#include "my.h"

void		*my_memcpy(void *dest, const void *src, size_t n)
{
  char		*destp;
  const char	*srcp;

  destp = dest;
  srcp = src;
  while (n > 0)
    {
      destp[0] = srcp[0];
      destp += 1;
      srcp += 1;
      n -= 1;
    }
  return (dest);
}
