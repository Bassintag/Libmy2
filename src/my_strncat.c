/*
** my_strncat.c for libmy in /home/bassintag/c-prog/Libmy
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Wed Oct  4 20:36:57 2017 Antoine Stempfer
** Last update Wed Oct  4 20:43:34 2017 Antoine Stempfer
*/

#include "my.h"

char	*my_strncat(char *dest, const char *src, size_t n)
{
  my_strncpy(dest + my_strlen(dest), src, n);
  return (dest);
}
