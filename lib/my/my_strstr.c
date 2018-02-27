/*
** my_strstr.c for my_strstr in /home/bechad_p/rendu/Piscine_C_J06/ex_04
** 
** Made by Pierre Bechade
** Login   <bechad_p@epitech.net>
** 
** Started on  Mon Oct  6 18:43:32 2014 Pierre Bechade
** Last update Tue Oct  7 11:11:57 2014 Pierre Bechade
*/

#include <unistd.h>

char    *my_strstr(char *str, char *to_find)
{
  int   a;
  int   b;
  int   i;

  i = 0;
  if (to_find[0] == '\0')
    return (str);
  while (str[i] != '\0')
    {
      a = 0;
      while (str[i] != to_find[a] && str[i] != '\0')
        {
          i = i + 1;
        }
      b = i;
      while (str[i] == to_find[a] && str[i] != '\0')
        {
          i = i + 1;
          a = a + 1;
          if (to_find[a] == '\0')
            return (&str[b]);
        }
    }
  return (NULL);
}
