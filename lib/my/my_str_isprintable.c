/*
** my_str_isprintable.c for my_str_osprintable in /home/bechad_p/rendu/Piscine_C_J06/ex_14
** 
** Made by Pierre Bechade
** Login   <bechad_p@epitech.net>
** 
** Started on  Tue Oct  7 01:09:40 2014 Pierre Bechade
** Last update Thu Oct  9 09:04:37 2014 Pierre Bechade
*/

int	my_str_isprintable(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] < 20) || (str[i] > '~'))
	return (0);
      i++;
    }
  return (1);
}
