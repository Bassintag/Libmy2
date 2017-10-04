/*
** my_isprint.c for libmy in /home/bassintag/c-prog/Libmy
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Wed Oct  4 22:30:44 2017 Antoine Stempfer
** Last update Wed Oct  4 22:31:25 2017 Antoine Stempfer
*/

#include "my.h"

int	my_isprint(int c)
{
  return my_pctype[c] & (_MY_BLANK_ | _MY_PUNCT_ |
			 _MY_UPPER_ | _MY_LOWER_ | _MY_DIGIT_);
}
