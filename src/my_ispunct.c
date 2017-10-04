/*
** my_ispunct.c for libmy in /home/bassintag/c-prog/Libmy
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Wed Oct  4 22:21:12 2017 Antoine Stempfer
** Last update Wed Oct  4 22:30:29 2017 Antoine Stempfer
*/

#include "my.h"

int	my_ispunct(int c)
{
  return my_pctype[c] & _MY_PUNCT_;
}
