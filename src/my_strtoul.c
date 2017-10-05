/*
** my_strtoul.c for libmy in /home/bassintag/c-prog/Libmy
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Thu Oct  5 18:53:17 2017 Antoine Stempfer
** Last update Thu Oct  5 18:55:39 2017 Antoine Stempfer
*/

#include "my.h"

unsigned long int      	my_strtoul(const char *str, char **endptr, int base)
{
  char			*p;
  unsigned long int    	u;

  p = (char *) str;
  while (my_isspace(*p))
    p += 1;
  u = 0;
  while (my_isdigit(*p))
    {
      u = u * base + *p - '0';
      p += 1;
    }
  if (endptr != NULL)
    *endptr = p;
  return (u);
}
