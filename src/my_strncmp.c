/*
** my_strncmp.c for libmy in /home/bassintag/c-prog/Libmy
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Wed Oct  4 21:24:51 2017 Antoine Stempfer
** Last update Wed Oct  4 21:26:02 2017 Antoine Stempfer
*/

#include "my.h"

int	my_strncmp(const char *str1, const char *str2, size_t n)
{
  char	c1;
  char	c2;

  c1 = '\0';
  c2 = '\0';
  while (n > 0)
    {
      c1 = *str1++;
      c2 = *str2++;
      if (c1 == '\0' || c1 != c2)
	return (c1 - c2);
      n -= 1;
    }
  return (c1 - c2);
}
