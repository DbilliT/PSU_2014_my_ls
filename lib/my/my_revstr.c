/*
** my_revstr.c for my_revstr in /home/bechad_p/rendu/Piscine_C_J06/ex_03
** 
** Made by Pierre Bechade
** Login   <bechad_p@epitech.net>
** 
** Started on  Tue Oct  7 09:57:17 2014 Pierre Bechade
** Last update Thu Oct  9 09:04:09 2014 Pierre Bechade
*/

char	*my_revstr(char* str)
{
  int	a;
  int	b;
  char	c;

  a = 0;
  b = my_strlen(str) - 1;
  while (a < b)
    {
      c = str[a];
      str[a] = str[b];
      str[b] = c;
      a = a + 1;
      b = b - 1;
    }
  return (str);
}
