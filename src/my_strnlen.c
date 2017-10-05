/*
** my_strnlen.c for libmy in /home/bassintag/c-prog/Libmy
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Wed Oct  4 20:44:07 2017 Antoine Stempfer
** Last update Thu Oct  5 18:27:05 2017 Antoine Stempfer
*/

#include "my.h"

size_t		my_strnlen(const char *s, size_t n)
{
  size_t	size;

  size = 0;
  while (s[size] != '\0' && size < n)
    size += 1;
  return (size);
}
