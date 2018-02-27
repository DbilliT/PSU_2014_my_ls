/*
** my_str_isnum.c for my_str_isnum in /home/bechad_p/rendu/Piscine_C_J06/ex_11
** 
** Made by Pierre Bechade
** Login   <bechad_p@epitech.net>
** 
** Started on  Tue Oct  7 00:58:15 2014 Pierre Bechade
** Last update Tue Oct  7 16:42:36 2014 Pierre Bechade
*/

int	my_str_isnum(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < '0' || str[i] > '9')
	return (0);
      i++;
    }
  return (1);
}
