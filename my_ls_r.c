/*
** my_ls_r.c for my_ls_r in /home/bechad_p/rendu/PSU_2014_my_ls
** 
** Made by Pierre Bechade
** Login   <bechad_p@epitech.net>
** 
** Started on  Sun Nov  2 19:31:49 2014 Pierre Bechade
** Last update Sun Nov  2 19:48:22 2014 Pierre Bechade
*/

#include "my.h"

void    affiche_r(char **tab)
{
  int   i;

  i = 0;
  while (tab[i] != NULL)
    i++;
  i--;
  while (i >= 0)
    {
      my_putstr(tab[i]);
      if (i != 0)
	my_putchar('\n');
      i--;
    }
}

int             my_rempli_tab_r(char *str, int size)
{
  DIR           *path;
  struct dirent *read;
  char          *folder;
  char          **tab;
  int           j;

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
  affiche_r(tab);
  free(tab);
  return (0);
}

int             my_ls_r1(char *str, int i)
{
  struct stat   sb;
  int           size;

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
  if (my_rempli_tab_r(str, size) == -2)
    return (-2);
  return (0);
}

void    my_ls_r(char **tab, int a)
{
  int   tmp;
  int	size;

  size  = a - 1;
  my_trie(0, tab);
  if (tab[0] == NULL)
    {
      my_ls_r1(".", a);
      my_putchar('\n');
    }
  else
    {
      while (size >= 0)
        {
          tmp = my_ls_r1(tab[size], a);
          if (tmp != -1 && tmp != -2)
            my_putchar('\n');
          if (size != 0  && tmp == 0)
            my_putchar('\n');
          size--;
        }
    }
}
