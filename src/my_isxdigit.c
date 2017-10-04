/*
** my_isxdigit.c for libmy in /home/bassintag/c-prog/Libmy
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Wed Oct  4 22:20:14 2017 Antoine Stempfer
** Last update Wed Oct  4 22:30:21 2017 Antoine Stempfer
*/

#include "my.h"

int	my_isxdigit(int c)
{
  return my_pctype[c] & _MY_HEX_;
}
