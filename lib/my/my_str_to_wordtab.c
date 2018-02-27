/*
** my_str_to_wordtab.c for my_str_to_wordtab in /home/bechad_p/rendu/Piscine_C_J08/ex_04
** 
** Made by Pierre Bechade
** Login   <bechad_p@epitech.net>
** 
** Started on  Wed Oct  8 16:59:30 2014 Pierre Bechade
** Last update Fri Oct 10 19:23:38 2014 Pierre Bechade
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	calcule_mot(char *str)
{
  int	i;
  int	mot;

  i = 0;
  mot = 0;
  while (str[i] != '\0')
    {
      if ((str[i] >= 'a' && str[i] <= 'z')
	  || (str[i] >= 'A' && str[i] <= 'Z')
	  || (str[i] >= '0' && str[i] <= '9'))
	{
	  mot++;
	  while ((str[i] >= 'a' && str[i] <= 'z')
		 || (str[i] >= 'A' && str[i] <= 'Z')
		 || (str[i] >= '0' && str[i] <= '9'))
	    i++;
	}
      if (str[i] != '\0')
	i++;
    }
  return (mot);
}

char 	**my_boucle2(char **tab, char *str, int i, int a)
{
  int	j;

  j = 0;
  while (str[i] != '\0')
    {
      if ((str[i] >= 'a' && str[i] <= 'z')
	  || (str[i] >= 'A' && str[i] <= 'Z')
	  || (str[i] >= '0' && str[i] <= '9'))
	{
	  while ((str[i] >= 'a' && str[i] <= 'z')
		 || (str[i] >= 'A' && str[i] <= 'Z')
		 || (str[i] >= '0' && str[i] <= '9'))
	    {
	      tab[j][a] = str[i];
	      a++;
	      i++;
	    }
	  a = 0;
	  j++;
	}
      if (str[i] != '\0')
	i++;
    }
  tab[j] = NULL;
  return (tab);
}

char	**my_str_to_wordtab(char *str)
{
  char	**tab;
  int	size;
  int	j;
  int	i;
  int	a;

  a = 0;
  i = 0;
  j = 0;
  size = calcule_mot(str);
  tab = malloc(sizeof(char *) * (size + 1));
  while (size > 0)
    {
      tab[j] = malloc(sizeof(char) * my_strlen(str));
      j++;
      size--;
    }
  return (my_boucle2(tab, str, i, a));
}
