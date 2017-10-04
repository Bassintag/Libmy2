/*
** my_isupper.c for libmy in /home/bassintag/c-prog/Libmy
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Wed Oct  4 22:18:16 2017 Antoine Stempfer
** Last update Wed Oct  4 22:29:53 2017 Antoine Stempfer
*/

#include "my.h"

int	my_isupper(int c)
{
  return my_pctype[c] & _MY_UPPER_;
}
