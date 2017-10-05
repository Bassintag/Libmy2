/*
** my_list_create.c for libmy in /home/bassintag/c-prog/Libmy
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Thu Oct  5 20:48:17 2017 Antoine Stempfer
** Last update Thu Oct  5 20:49:03 2017 Antoine Stempfer
*/

#include "my.h"

t_list	*my_list_create(void)
{
  return (my_calloc(sizeof(t_list)));
}
