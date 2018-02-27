/*
** my_recup_param.c for my_recup_param in /home/bechad_p/rendu/PSU_2014_my_ls
** 
** Made by Pierre Bechade
** Login   <bechad_p@epitech.net>
** 
** Started on  Thu Oct 30 16:39:53 2014 Pierre Bechade
** Last update Sun Nov  2 18:30:29 2014 Pierre Bechade
*/

#include "my.h"

char	*my_recup_option(char **av)
{
  char	*str;
  int	i;
  int	size;

  i = 0;
  size = 0;
  while (av[i] != NULL)
    {
      size = size + my_strlen(av[i]);
      i++;
    }
  i = 0;
  str = my_xmalloc(sizeof(char) * size);
  str[0] = '\0';
  while (av[i] != NULL)
    {
      if (av[i][0] == '-')
	str = my_strcat(str, av[i] + 1);
      i++;
    }
  return (str);
}

char	**my_recup_path(int ac, char **av)
{
  char	**tab;
  int	i;
  int	j;

  i = 1;
  j = 0;
  tab = my_xmalloc(sizeof(char *) * ac + 1);
  while (av[i] != NULL)
    {
      if (av[i][0] != '-' || (av[i][0] == '-' && av[i][1] == '\0'))
	{
	  tab[j] = my_xstrdup(av[i]);
	  j++;
	}
      i++;
    }
  tab[j] = NULL;
  return (tab);
}
