/*
** my_aff_link.c for my_aff_link in /home/bechad_p/rendu/PSU_2014_my_ls
** 
** Made by Pierre Bechade
** Login   <bechad_p@epitech.net>
** 
** Started on  Sun Nov  2 22:16:13 2014 Pierre Bechade
** Last update Sun Nov  2 22:37:58 2014 Pierre Bechade
*/

#include "my.h"

void            aff_link(char *copy)
{
  struct stat   sb;
  char          *linkname;
  ssize_t       r;

  if (lstat(copy, &sb) == -1)
    {
      perror("lstat");
      exit (0);
    }
  if (S_ISLNK(sb.st_mode))
    {
      linkname = malloc(sb.st_size + 1);
      if ((r = readlink(copy, linkname, sb.st_size + 1)) == -1)
        {
          perror("lstat");
          exit (0);
        }
      linkname[r] = '\0';
      write(1, " -> ", 4);
      write(1, linkname, my_strlen(linkname));
    }
}
