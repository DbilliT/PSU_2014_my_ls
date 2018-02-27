/*
** my_strncmp.c for my_strncmp in /home/bechad_p/rendu/Piscine_C_J06/ex_06
** 
** Made by Pierre Bechade
** Login   <bechad_p@epitech.net>
** 
** Started on  Mon Oct  6 23:34:09 2014 Pierre Bechade
** Last update Thu Oct  9 09:05:26 2014 Pierre Bechade
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  if (n < 0)
    n = n * (-1);
  if (my_strlen(s1) < n && my_strlen(s2) < n)
    {
      if (my_strlen(s1) > my_strlen(s2))
	n = my_strlen(s1);
      else
	n = my_strlen(s2);
    }
  while (n > 0)
    {
      if (s1[i] > s2[i])
	return (s1[i] - s2[i]);
      if (s1[i] < s2[i])
	return (s1[i] - s2[i]);
      i++;
      n--;
    }
  return (0);
}
