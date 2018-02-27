/*
** my_ls_simple.c for my_ls_simple in /home/bechad_p/rendu/PSU_2014_my_ls
** 
** Made by Pierre Bechade
** Login   <bechad_p@epitech.net>
** 
** Started on  Sat Nov  1 19:40:49 2014 Pierre Bechade
** Last update Sun Nov  2 14:28:40 2014 Pierre Bechade
*/

#include "my.h"

void	my_ls_simple(char **tab, int a)
{
  int	i;
  int	tmp;

  i = 0;
  if (tab[i] == NULL)
    {
      my_ls(".", a);
      my_putchar('\n');
    }
  else
    {
      while (tab[i] != NULL)
	{
	  tmp = my_ls(tab[i], a);
	  if (tmp != -1 && tmp != -2)
	    my_putchar('\n');
	  if (tab[i + 1] != NULL && tmp == 0)
	    my_putchar('\n');
	  i++;
	}
    }
}

int	my_xlstat(char *str, struct stat *sb)
{
  if (lstat(str, sb) == -1)
    {
      my_putstr_e("my_ls: cannot access ");
      perror(str);
      return (-1);
    }
  return (0);
}

int		my_rempli_tab(char *str, int size)
{
  DIR           *path;
  struct dirent *read;
  char		*folder;
  char		**tab;
  int		j;

  j = 0;
  folder = my_strdup(str);
  path = x_opendir(folder);
  tab = malloc(sizeof(char*) * (size + 1));
  while ((read = readdir(path)) != NULL)
    (read->d_name[0] != '.' ? tab[j] = my_strdup(read->d_name), j++ : 0);
  tab[j] = NULL;
  if (tab[0] == NULL)
    return (-2);
  my_trie(0, tab);
  affiche(tab);
  free(tab);
  return (0);
}

int	my_cpt_folder(char *str)
{
  DIR           *path;
  struct dirent *read;
  char		*folder;
  int		i;

  folder = my_strdup(str);
  path = x_opendir(folder);
  read = x_readdir(path);
  while ((read = readdir(path)) != NULL)
    i++;
  return (i);
}

int             my_ls(char *str, int i)
{
  struct stat   sb;
  int		size;

  if (my_xlstat(str, &sb) == - 1)
    return (-1);
  if (S_ISREG(sb.st_mode))
    {
      my_putstr(str);
      return (0);
    }
  if (i > 1)
    {
      my_putstr(str);
      my_putstr(":\n");
    }
  size = my_cpt_folder(str);
  if (my_rempli_tab(str, size) == -2)
    return (-2);
  return (0);
}
