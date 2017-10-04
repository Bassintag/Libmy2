/*
** my_strlen.c for libmy in /home/bassintag/c-prog/Libmy
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Wed Oct  4 19:45:20 2017 Antoine Stempfer
** Last update Wed Oct  4 20:45:05 2017 Antoine Stempfer
*/

#include "my.h"

size_t		my_strlen(const char *s)
{
  if (*s == '\0')
    return (0);
  return (my_strlen(s + 1) + 1);
}
