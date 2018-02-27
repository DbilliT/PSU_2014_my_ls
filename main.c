/*
** main.c for my_ls in /home/bechad_p/rendu/PSU_2014_my_ls
** 
** Made by Pierre Bechade
** Login   <bechad_p@epitech.net>
** 
** Started on  Mon Oct 27 11:44:34 2014 Pierre Bechade
** Last update Sun Nov  2 18:28:10 2014 Pierre Bechade
*/

#include "my.h"

int	main(int ac, char **av)
{
  char	*opt;
  char	**tab;
  int	i;

  i = 0;
  opt = my_recup_option(av);
  if (opt[0] != '\0')
    {
      my_parse_option(opt);
      opt = my_clean_option(opt);
    }
  tab = my_recup_path(ac, av);
  while (tab[i] != NULL)
    i++;
  if (opt[0] == '\0')
    {
      my_ls_simple(tab, i);
      free(opt);
      free(tab);
      return (0);
    }
  my_apply_ls(opt, tab, i);
  free(opt);
  free(tab);
  return (0);
}
