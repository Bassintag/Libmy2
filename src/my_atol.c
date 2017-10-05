/*
** my_atol.c for libmy in /home/bassintag/c-prog/Libmy
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Thu Oct  5 18:37:48 2017 Antoine Stempfer
** Last update Thu Oct  5 18:38:25 2017 Antoine Stempfer
*/

#include "my.h"

long int	my_atol(const char *str)
{
  return (my_strtol(str, NULL, 10));
}
