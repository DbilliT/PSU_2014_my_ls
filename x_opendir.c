/*
** x_opendir.c for opendir in /home/bechad_p/rendu/PSU_2014_my_ls
** 
** Made by Pierre Bechade
** Login   <bechad_p@epitech.net>
** 
** Started on  Thu Oct 30 15:07:11 2014 Pierre Bechade
** Last update Thu Oct 30 15:31:56 2014 Pierre Bechade
*/

#include "my.h"

DIR	*x_opendir(char *folder)
{
  DIR	*path;

  if ((path = opendir(folder)) == NULL)
    {
      perror("Can not open .");
      exit(1);
    }
  return (path);
}

struct dirent	*x_readdir(DIR *path)
{
  struct dirent *read;

  read = readdir(path);
  if (read == NULL)
    {
      perror("Could not read .");
      exit(1);
    }
  return (read);
}
