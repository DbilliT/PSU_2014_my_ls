/*
** my_show_wordtab.c for my_show_wordtab in /home/bechad_p/rendu/Piscine_C_J08/ex_05
** 
** Made by Pierre Bechade
** Login   <bechad_p@epitech.net>
** 
** Started on  Thu Oct  9 19:17:05 2014 Pierre Bechade
** Last update Thu Oct  9 20:58:46 2014 Pierre Bechade
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	my_putchar(char c);
void	my_putstr(char *str);
char	**my_str_to_wordtab(char *str);

int	my_show_wordtab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i] != NULL)
    {
      my_putstr(tab[i]);
      my_putchar('\n');
      i++;
    }
  return (0);
}
