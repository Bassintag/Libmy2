/*
** my_strtol.c for libmy in /home/bassintag/c-prog/Libmy
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Thu Oct  5 18:48:05 2017 Antoine Stempfer
** Last update Thu Oct  5 19:13:56 2017 Antoine Stempfer
*/

#include "my.h"

long int       	my_strtol(const char *str, char **endptr, int base)
{
  char		*p;
  long int	i;

  p = (char *) str;
  while (my_isspace(*p))
    p += 1;
  if (*p == '-')
    {
      p += 1;
      i = -1 * my_strtoul(p, &p, base);
    }
  else
    i = my_strtoul(p, &p, base);
  if (endptr != NULL)
    *endptr = p;
  return (i);
}
