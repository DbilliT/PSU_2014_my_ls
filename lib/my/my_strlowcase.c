/*
** my_strlowcase.c for strlowcase in /home/bechad_p/rendu/Piscine_C_J06/ex_08
** 
** Made by Pierre Bechade
** Login   <bechad_p@epitech.net>
** 
** Started on  Mon Oct  6 23:33:20 2014 Pierre Bechade
** Last update Wed Oct  8 15:18:16 2014 Pierre Bechade
*/

char	*my_strlowcase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 'A' && str[i] <= 'Z')
	str[i] = str[i] + 32;
      i++;
    }
  return (str);
}
