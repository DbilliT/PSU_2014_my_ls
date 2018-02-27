/*
** my_strupcase.c for strupcase in /home/bechad_p/rendu/Piscine_C_J06/ex_07
** 
** Made by Pierre Bechade
** Login   <bechad_p@epitech.net>
** 
** Started on  Mon Oct  6 22:43:29 2014 Pierre Bechade
** Last update Tue Oct  7 16:22:40 2014 Pierre Bechade
*/

char	*my_strupcase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 'a' && str[i] <= 'z')
      	{
      	  if (str[i] == str[0])
      	    str[i] = str[i] - 32;
      	  else
	    str[i] = str[i] - 32;
      	}
      i++;
    }
  return (str);
}
