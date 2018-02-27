/*
** my_ls_lr.c for my_ls_lr in /home/bechad_p/rendu/PSU_2014_my_ls
** 
** Made by Pierre Bechade
** Login   <bechad_p@epitech.net>
** 
** Started on  Sun Nov  2 19:53:13 2014 Pierre Bechade
** Last update Sun Nov  2 22:44:32 2014 Pierre Bechade
*/

#include "my.h"

void    my_ls_lr2(char *str, char **tab)
{
  int           i;
  char          *copy;

  total(str, tab);
  i = 0;
  while (tab[i] != NULL)
    i++;
  i--;
  while (i >= 0)
    {
      copy = my_ajout_path(str, tab[i]);
      affiche_l(copy);
      my_putstr(tab[i]);
      aff_link(copy);
      i--;
    }
  my_putchar('\n');
}

int             my_rempli_tab_lr(char *str, int size)
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
  my_ls_lr2(str, tab);
  free(tab);
  return (0);
}

int             my_ls_lr1(char *str, int i)
{
  struct stat   sb;
  int           size;

  if (my_xlstat(str, &sb) == - 1)
    return (-1);
  if (S_ISREG(sb.st_mode))
    {
      affiche_l(str);
      my_putstr(str);
      my_putchar('\n');
      return (-3);
    }
  if (i > 1)
    {
      my_putstr(str);
      my_putstr(":\n");
    }
  size = my_cpt_folder(str);
  if (my_rempli_tab_lr(str, size) == -2)
    return (-2);
  return (0);
}

void    my_ls_lr(char **tab, int a)
{
  int   size;

  size  = a - 1;
  my_trie(0, tab);
  if (tab[0] == NULL)
    my_ls_lr1(".", a);
  else
    {
      while (size >= 0)
	{
          my_ls_lr1(tab[size], a);
          if (size != 0)
	    my_putchar('\n');
          size--;
        }
    }
}
