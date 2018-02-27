/*
** my_strdup.c for my_strdup in /home/bechad_p/rendu/Piscine_C_J08
** 
** Made by Pierre Bechade
** Login   <bechad_p@epitech.net>
** 
** Started on  Wed Oct  8 16:18:50 2014 Pierre Bechade
** Last update Fri Oct 10 19:23:53 2014 Pierre Bechade
*/

#include <stdlib.h>
#include <unistd.h>

char	*my_strdup(char *src)
{
  int	i;
  char	*dest;

  i = 0;
  dest = malloc(sizeof(char) * (my_strlen(src) + 1));
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
