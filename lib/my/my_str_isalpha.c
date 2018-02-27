/*
** my_str_isalpha.c for my_str_isalpha in /home/bechad_p/rendu/Piscine_C_J06/ex_10
** 
** Made by Pierre Bechade
** Login   <bechad_p@epitech.net>
** 
** Started on  Tue Oct  7 00:15:53 2014 Pierre Bechade
** Last update Tue Oct  7 16:41:40 2014 Pierre Bechade
*/

int	my_str_isalpha(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (((str[i] < 'A') || str[i] > 'Z')
	  && ((str[i] < 'a') || (str[i] > 'z')))
	return (0);
      i++;
    }
  return (1);
}
