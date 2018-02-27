/*
** my_trie.c for trie in /home/bechad_p/rendu/PSU_2014_my_ls
** 
** Made by Pierre Bechade
** Login   <bechad_p@epitech.net>
** 
** Started on  Thu Oct 30 16:12:24 2014 Pierre Bechade
** Last update Sun Nov  2 19:47:01 2014 Pierre Bechade
*/

#include "my.h"

void	affiche(char **tab)
{
  int	i;

  i = 0;
  if (tab != NULL)
    {
      while (tab[i] != NULL)
	{
	  my_putstr(tab[i]);
	  if (tab[i + 1] != NULL)
	    write(1, "\n", 1);
	  i++;
	}
    }
}

void	my_trie(int j, char **tab)
{
  char          *tmp;
  int           i;

  i = 0;
  while (tab[i + 1] != NULL)
    {
      tmp = my_strdup(tab[i]);
      if (my_strcmp(tab[i], tab[i + 1]) > 0)
        {
          free(tab[i]);
          tab[i] = my_strdup(tab[i + 1]);
          free(tab[i + 1]);
          tab[i + 1] = my_strdup(tmp);
        }
      i++;
      free(tmp);
    }
  j++;
  if (j < (i + 1))
    my_trie(j, tab);
}

char	*my_ajout_path(char *str, char *tabi)
{
  int	i;
  int	j;
  char	*new;

  i = 0;
  j = 0;
  if (str[0] == '.' && str[1] == '\0')
    return (tabi);
  new = malloc(sizeof(char) * (my_strlen(str) + my_strlen(tabi) + 2));
  while (str[i] != '\0')
    {
      new[i] = str[i];
      i++;
    }
  new[i] = '/';
  i++;
  while (tabi[j] != '\0')
    {
      new[i] = tabi[j];
      i++;
      j++;
    }
  new[i] = '\0';
  return (new);
}
