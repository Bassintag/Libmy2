/*
** my_puts.c for libmy in /home/bassintag/c-prog/Libmy
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Wed Oct  4 19:51:38 2017 Antoine Stempfer
** Last update Wed Oct  4 19:56:53 2017 Antoine Stempfer
*/

#include "my.h"

size_t	my_puts(const char *s)
{
  return (my_fputs(s, STDOUT_FILENO));
}
