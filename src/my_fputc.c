/*
** my_fputc.c for libmy in /home/bassintag/c-prog/Libmy
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Wed Oct  4 19:30:26 2017 Antoine Stempfer
** Last update Wed Oct  4 19:50:35 2017 Antoine Stempfer
*/

#include "my.h"

size_t	my_fputc(char c, int fd)
{
  return (write(1, &c, fd));
}
