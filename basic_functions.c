/*
** basic_functions.c for basic_functions in /home/bechad_p/rendu/PSU_2014_my_ls
** 
** Made by Pierre Bechade
** Login   <bechad_p@epitech.net>
** 
** Started on  Fri Oct 31 12:59:22 2014 Pierre Bechade
** Last update Fri Oct 31 13:31:32 2014 Pierre Bechade
*/

#include "my.h"

char    *my_xstrdup(char *src)
{
  int   i;
  char  *dest;

  i = 0;
  dest = my_xmalloc(sizeof(char) * (my_strlen(src) + 1));
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}

void    *my_xmalloc(int size)
{
  void  *tmp;

  if ((tmp = malloc(size)) == NULL)
    {
      write(2, "Error malloc\n", 13);
      exit(0);
    }
  return (tmp);
}

void	my_putchar_e(char c)
{
  write(2, &c, 1);
}

void	my_putstr_e(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar_e(str[i]);
      i++;
    }
}
