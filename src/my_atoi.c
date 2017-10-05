/*
** my_atoi.c for libmy in /home/bassintag/c-prog/Libmy
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Thu Oct  5 18:35:24 2017 Antoine Stempfer
** Last update Thu Oct  5 18:38:37 2017 Antoine Stempfer
*/

#include "my.h"

int	my_atoi(const char *str)
{
  return ((int) my_strtol(str, NULL, 10));
}
