/*
** my_strnlen.c for libmy in /home/bassintag/c-prog/Libmy
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Wed Oct  4 20:44:07 2017 Antoine Stempfer
** Last update Wed Oct  4 20:45:27 2017 Antoine Stempfer
*/

#include "my.h"

size_t		my_strnlen(const char *s, size_t n)
{
  if (n == 0 || *s == '\0')
    return (0);
  return (my_strnlen(s + 1, n - 1) + 1);
}
