/*
** my_parse_option.c for my_parse_option in /home/bechad_p/rendu/PSU_2014_my_ls
** 
** Made by Pierre Bechade
** Login   <bechad_p@epitech.net>
** 
** Started on  Fri Oct 31 13:13:40 2014 Pierre Bechade
** Last update Sun Nov  2 21:51:22 2014 Pierre Bechade
*/

#include "my.h"

void	my_parse_option(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_char_cmp(str[i]);
      i++;
    }
}

void	my_char_cmp(char c)
{
  char	*str;
  int	i;
  int	tmp;

  str = my_xstrdup("lRdrt");
  i = 0;
  tmp = 0;
  while (str[i] != '\0')
    {
      if (c == str[i])
	tmp++;
      i++;
    }
  if (tmp == 0)
    {
      my_putstr_e("ls: invalid option -- '");
      my_putchar_e(c);
      my_putstr_e("'\nOnly [-lRdrt] options are available.\n");
      free(str);
      exit(-1);
    }
  free(str);
}

char	*my_clean_option(char *opt)
{
  char	*str;
  char	*option;
  int	tab[5];
  int	i;
  int	j;

  str = malloc(sizeof(char) * 6);
  option = my_xstrdup("lRdrt");
  i = -1;
  while (opt[++i] != '\0')
    {
      (opt[i] == 'l' ? tab[0] = 1 : 0);
      (opt[i] == 'R' ? tab[1] = 1 : 0);
      (opt[i] == 'd' ? tab[2] = 1 : 0);
      (opt[i] == 'r' ? tab[3] = 1 : 0);
      (opt[i] == 't' ? tab[4] = 1 : 0);
    }
  free(opt);
  i = -1;
  j = 0;
  while (++i < 4)
    (tab[i] == 1 ? str[j] = option[i], j++ : 0);
  str[j] = '\0';
  free(option);
  return (str);
}
