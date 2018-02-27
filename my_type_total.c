/*
** my_type.c for my_type in /home/bechad_p/rendu/PSU_2014_my_ls
** 
** Made by Pierre Bechade
** Login   <bechad_p@epitech.net>
** 
** Started on  Sun Nov  2 14:42:56 2014 Pierre Bechade
** Last update Sun Nov  2 18:14:45 2014 Pierre Bechade
*/

#include "my.h"

void            type(struct stat sb)
{
  if (sb.st_mode & S_IFMT)
    {
      if (S_ISBLK(sb.st_mode))
	my_putchar('b');
      else if (S_ISCHR(sb.st_mode))
	my_putchar('c');
      else if (S_ISLNK(sb.st_mode))
	my_putchar('l');
      else if (S_ISDIR(sb.st_mode))
	my_putchar('d');
      else if (S_ISFIFO(sb.st_mode))
	my_putchar('p');
      else if (S_ISREG(sb.st_mode))
	my_putchar('-');
      (sb.st_mode & S_IRUSR) ? my_putchar('r') : my_putchar('-');
      (sb.st_mode & S_IWUSR) ? my_putchar('w') : my_putchar('-');
      (sb.st_mode & S_IXUSR) ? my_putchar('x') : my_putchar('-');
      (sb.st_mode & S_IRGRP) ? my_putchar('r') : my_putchar('-');
      (sb.st_mode & S_IWGRP) ? my_putchar('w') : my_putchar('-');
      (sb.st_mode & S_IXGRP) ? my_putchar('x') : my_putchar('-');
      (sb.st_mode & S_IROTH) ? my_putchar('r') : my_putchar('-');
      (sb.st_mode & S_IWOTH) ? my_putchar('w') : my_putchar('-');
      (sb.st_mode & S_IXOTH) ? my_putchar('x') : my_putchar('-');
    }
}

void            total(char *str, char **tab)
{
  struct stat   sb;
  char          *new_path;
  int           j;
  int           tmp;

  tmp = 0;
  j = 0;
  while (tab[j] != NULL)
    {
      new_path = my_ajout_path(str, tab[j]);
      if (lstat(new_path, &sb) == -1)
        {
	  my_putstr(tab[j]);
          perror (" stat error");
          exit(1);
        }
      tmp = tmp + sb.st_blocks / 2;
      j++;
    }
  my_putstr("total ");
  my_put_nbr(tmp);
}
