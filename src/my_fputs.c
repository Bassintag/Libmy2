/*
** my_fputs.c for libmy in /home/bassintag/c-prog/Libmy
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Wed Oct  4 19:50:46 2017 Antoine Stempfer
** Last update Wed Oct  4 19:56:44 2017 Antoine Stempfer
*/

#include "my.h"

size_t	my_fputs(const char *s, int fd)
{
  return (write(fd, s, my_strlen(s)));
}
