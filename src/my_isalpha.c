/*
** my_isalpha.c for libmy in /home/bassintag/c-prog/Libmy
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Wed Oct  4 22:17:13 2017 Antoine Stempfer
** Last update Wed Oct  4 22:23:14 2017 Antoine Stempfer
*/

#include "my.h"

int	my_isalpha(int c)
{
  return my_pctype[c] & (_MY_UPPER_ | _MY_LOWER_);
}
