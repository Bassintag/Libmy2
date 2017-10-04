/*
** my_isspace.c for libmy in /home/bassintag/c-prog/Libmy
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Wed Oct  4 22:20:51 2017 Antoine Stempfer
** Last update Wed Oct  4 22:44:07 2017 Antoine Stempfer
*/

#include "my.h"

int	my_isspace(int c)
{
  return my_pctype[c] & _MY_SPACE_;
}
