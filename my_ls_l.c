/*
** my_ls_l.c for my_ls_l in /home/bechad_p/rendu/PSU_2014_my_ls
** 
** Made by Pierre Bechade
** Login   <bechad_p@epitech.net>
** 
** Started on  Fri Oct 31 21:15:25 2014 Pierre Bechade
** Last update Sun Nov  2 22:56:42 2014 Pierre Bechade
*/

#include "my.h"

void            affiche_l(char *tab)
{
  struct stat   sb;
  struct passwd *pwd;
  struct group  *grp;

  if (lstat(tab, &sb) == -1)
    {
      perror (" stat error");
      exit(1);
    }
  my_putchar('\n');
  type(sb);
  my_putchar(' ');
  my_put_nbr(sb.st_nlink);
  my_putchar(' ');
  if ((pwd = getpwuid(sb.st_uid)) != NULL)
    write(1, pwd->pw_name, my_strlen(pwd->pw_name));
  my_putchar(' ');
  if ((grp = getgrgid(sb.st_gid)) != NULL)
    write(1, grp->gr_name, my_strlen(grp->gr_name));
  my_putchar(' ');
  my_put_nbr(sb.st_size);
  my_putchar(' ');
  write(1, ctime(&sb.st_ctime), (my_strlen(ctime(&sb.st_ctime)) - 1));
  my_putchar(' ');
}

void	my_ls_l(char *str, char **tab)
{
  int           i;
  char          *copy;

  total(str, tab);
  i = 0;
  while (tab[i] != NULL)
    {
      copy = my_ajout_path(str, tab[i]);
      affiche_l(copy);
      my_putstr(tab[i]);
      aff_link(copy);
      i++;
    }
  my_putchar('\n');
}

int             my_rempli_tab_l2(char *str, int size)
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
  my_ls_l(str, tab);
  free(tab);
  return (0);
}

int             my_ls_l2(char *str, int i)
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
  if (my_rempli_tab_l2(str, size) == -2)
    return (-2);
  return (0);
}

void	my_ls_l1(char **tab, int a)
{
  int   i;

  i = 0;
  if (tab[i] == NULL)
    my_ls_l2(".", a);
  else
    {
      while (tab[i] != NULL)
	{
	  my_ls_l2(tab[i], a);
	  if (tab[i + 1] != NULL)
	    my_putchar('\n');
	  i++;
	}
    }
}
