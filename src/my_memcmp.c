/*
** my_memcmp.c for libmy in /home/bassintag/c-prog/Libmy
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Wed Oct  4 21:10:21 2017 Antoine Stempfer
** Last update Wed Oct  4 21:13:15 2017 Antoine Stempfer
*/

#include "my.h"

int		my_memcmp(const void *str1, const void *str2, size_t n)
{
  int		diff;
  const char	*strp1;
  const char	*strp2;

  if (n == 0)
    return (0);
  strp1 = str1;
  strp2 = str2;
  diff = strp1[0] - strp2[0];
  if (diff == 0)
    return (my_memcmp(strp1 + 1, strp2 + 1, n));
  return (diff);
}
