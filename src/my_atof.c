/*
** my_atof.c for libmy in /home/bassintag/c-prog/Libmy
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Thu Oct  5 18:34:14 2017 Antoine Stempfer
** Last update Thu Oct  5 18:37:42 2017 Antoine Stempfer
*/

#include "my.h"

double	my_atof(const char *str)
{
  return (my_strtod(str, NULL));
}
