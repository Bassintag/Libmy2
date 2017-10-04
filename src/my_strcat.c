/*
** my_strcat.c for libmy in /home/bassintag/c-prog/Libmy
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Wed Oct  4 20:41:30 2017 Antoine Stempfer
** Last update Wed Oct  4 20:41:30 2017 Antoine Stempfer
*/

#include "my.h"

char	*my_strcat(char *dest, const char *src)
{
  my_strcpy(dest + my_strlen(dest), src);
  return (dest);
}
