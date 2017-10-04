/*
** my_isalnum.c for libmy in /home/bassintag/c-prog/Libmy
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Wed Oct  4 22:22:04 2017 Antoine Stempfer
** Last update Wed Oct  4 22:28:39 2017 Antoine Stempfer
*/

#include "my.h"

int	my_isalnum(int c)
{
  return my_pctype[c] & (_MY_UPPER_ | _MY_LOWER_ | _MY_DIGIT_);
}
