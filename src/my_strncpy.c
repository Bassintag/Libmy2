/*
** my_strncpy.c for libmy in /home/bassintag/c-prog/Libmy
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Wed Oct  4 20:47:33 2017 Antoine Stempfer
** Last update Wed Oct  4 20:50:34 2017 Antoine Stempfer
*/

#include "my.h"

char		*my_strncpy(char *dest, const char *src, size_t n)
{
  size_t	size;

  size = my_strnlen(src, n);
  if (size != n)
    my_memset(dest + size, '\0', n - size);
  return my_memcpy(dest, src, size);
}
