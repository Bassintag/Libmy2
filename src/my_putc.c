/*
** my_putc.c for libmy in /home/bassintag/c-prog/Libmy
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Wed Oct  4 19:36:22 2017 Antoine Stempfer
** Last update Wed Oct  4 19:55:01 2017 Antoine Stempfer
*/

#include <unistd.h>
#include "my.h"

size_t	my_putc(char c)
{
  return (my_fputc(c, STDOUT_FILENO));
}
