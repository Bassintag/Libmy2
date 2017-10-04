/*
** my_strcpy.c for libmy in /home/bassintag/c-prog/Libmy
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Wed Oct  4 20:45:40 2017 Antoine Stempfer
** Last update Wed Oct  4 20:46:56 2017 Antoine Stempfer
*/

#include "my.h"

char	*my_strcpy(char *dest, const char *src)
{
  return (my_memcpy(dest, src, my_strlen(src) + 1));
}
