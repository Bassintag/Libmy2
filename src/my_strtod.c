/*
** my_strtod.c for libmy in /home/bassintag/c-prog/Libmy
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Thu Oct  5 18:40:04 2017 Antoine Stempfer
** Last update Thu Oct  5 19:16:18 2017 Antoine Stempfer
*/

#include "my.h"

static double	_parse_frac(const char *str, char **endptr)
{
  char		*p;
  double	frac;
  double       	div;

  p = (char *)str;
  frac = 0;
  div = 10;
  while (my_isdigit(*p))
    {
      frac += (*p - '0') / div;
      div *= 10;
      p += 1;
    }
  *endptr = p;
  return (frac);
}

double		my_strtod(const char *str, char **endptr)
{
  char		*p;
  double	d;
  double	frac;
  int		sign;

  p = (char *) str;
  sign = 1;
  if (*p == '-')
    {
      p += 1;
      sign = -1;
    }
  d = my_strtoul(p, &p, 10);
  frac = 0;
  if (*p == '.')
    {
      p += 1;
      frac = _parse_frac(p, &p);
    }
  if (endptr != NULL)
    *endptr = p;
  return (sign * (d + frac));
}
