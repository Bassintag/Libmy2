/*
** my_strchr.c for libmy in /home/bassintag/c-prog/Libmy
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Wed Oct  4 20:00:54 2017 Antoine Stempfer
** Last update Wed Oct  4 20:36:30 2017 Antoine Stempfer
*/

#include "my.h"

char	*my_strchr(const char *str, int c)
{
  if (*str == c)
    return ((char *)str);
  if (*str == '\0')
    return (NULL);
  return (my_strchr(str + 1, c));
}
