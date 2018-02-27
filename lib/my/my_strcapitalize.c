/*
** my_strcapitalize.c for my_strcapitalize in /home/bechad_p/rendu/Piscine_C_J06/ex_09
** 
** Made by Pierre Bechade
** Login   <bechad_p@epitech.net>
** 
** Started on  Mon Oct  6 23:36:52 2014 Pierre Bechade
** Last update Tue Oct  7 20:58:22 2014 Pierre Bechade
*/

char	*my_strcapitalize(char *str)
{
  int	i;
  int	a;

  i = 0;
  a = 1;
  while (str[i] != '\0')
    {
      if (str[i] >= 'A' && str[i] <= 'Z')
	str[i] = str[i] + 32;
      i++;
    }
  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	{
	  if (str[i] == str[0])
	    str[0] = str[i] - 32;
	  if (str[i - a] == ' ' || str[i - a] == '-' || str[i - a] == '+')
	    str[i] = str[i] - 32;
	}
      i++;
    }
  return (str);
}
