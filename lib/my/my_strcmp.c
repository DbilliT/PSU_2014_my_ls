/*
** my_strcmp.c for strcmp in /home/bechad_p/rendu/Piscine_C_J06/ex_05
** 
** Made by Pierre Bechade
** Login   <bechad_p@epitech.net>
** 
** Started on  Mon Oct  6 16:24:26 2014 Pierre Bechade
** Last update Thu Oct  9 09:04:51 2014 Pierre Bechade
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;
  int	size;

  i = 0;
  if (my_strlen(s1) > my_strlen(s2))
    size = my_strlen(s2);
  else
    size = my_strlen(s1);
  while (size >= 0)
    {
      if (s1[i] > s2[i])
	return (s1[i] - s2[i]);
      if (s1[i] < s2[i])
	return (s1[i] - s2[i]);
      i++;
      size--;
    }
  return (0);
}
