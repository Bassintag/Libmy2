/*
** my_strlen.c for libmy in /home/bassintag/c-prog/Libmy
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Wed Oct  4 19:45:20 2017 Antoine Stempfer
** Last update Thu Oct  5 18:22:41 2017 Antoine Stempfer
*/

#include "my.h"

size_t		my_strlen(const char *s)
{
  size_t	size;

  size = 0;
  while (s[size] != '\0')
    size += 1;
  return (size);
}
