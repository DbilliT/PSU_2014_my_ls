/*
** my_str_isupper.c for my_str_isupper in /home/bechad_p/rendu/Piscine_C_J06/ex_13
** 
** Made by Pierre Bechade
** Login   <bechad_p@epitech.net>
** 
** Started on  Tue Oct  7 01:06:00 2014 Pierre Bechade
** Last update Tue Oct  7 16:48:30 2014 Pierre Bechade
*/

int	my_str_isupper(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] < 'A') || (str[i] > 'Z'))
	return (0);
      i++;
    }
  return (1);
}
