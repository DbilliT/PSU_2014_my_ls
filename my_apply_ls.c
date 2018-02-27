/*
** my_apply_ls.c for my_apply_ls in /home/bechad_p/rendu/PSU_2014_my_ls
** 
** Made by Pierre Bechade
** Login   <bechad_p@epitech.net>
** 
** Started on  Fri Oct 31 21:02:49 2014 Pierre Bechade
** Last update Sun Nov  2 22:15:30 2014 Pierre Bechade
*/

#include "my.h"

void	my_apply_ls(char *opt, char **tab, int a)
{
  int	i;

  i = 0;
  while (opt[i] != '\0')
      i++;
  if (i > 2)
    {
      free(opt);
      free(tab);
      my_putstr_e("Nombre d'options non gérés.\n");
      my_putstr_e("Ce my_ls gère seulement ");
      my_putstr_e("les options -r et -l.\n");
      exit (0);
    }
  else if ((opt[0] == 'l' && opt[1] == 'r')
	   || (opt[1] == 'l' && opt[0] == 'r'))
    my_ls_lr(tab, a);
  else if (opt[0] == 'l')
    my_ls_l1(tab, a);
  else if (opt[0] == 'r')
    my_ls_r(tab, a);
  else
    my_ls_simple(tab, a);
}
