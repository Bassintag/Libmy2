/*
** my_strcmp.c for libmy in /home/bassintag/c-prog/Libmy
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Wed Oct  4 21:20:56 2017 Antoine Stempfer
** Last update Wed Oct  4 21:23:06 2017 Antoine Stempfer
*/

#include "my.h"

int	my_strcmp(const char *str1, const char *str2)
{
  char	c1;
  char	c2;

  c1 = *str1;
  c2 = *str2;
  while (c1 == c2)
    {
      if (c1 == '\0')
	return (c1 - c2);
      c1 = *str1++;
      c2 = *str2++;
    }
  return (c1 - c2);
}
