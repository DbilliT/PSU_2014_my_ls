/*
** my_str_islower.c for my_str_islower in /home/bechad_p/rendu/Piscine_C_J06/ex_12
** 
** Made by Pierre Bechade
** Login   <bechad_p@epitech.net>
** 
** Started on  Tue Oct  7 01:02:10 2014 Pierre Bechade
** Last update Tue Oct  7 16:45:59 2014 Pierre Bechade
*/

int	my_str_islower(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] < 'a') || (str[i] > 'z'))
	return (0);
      i++;
    }
  return (1);
}
