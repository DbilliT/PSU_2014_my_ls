/*
** my_strncpy.c for strncpy in /home/bechad_p/rendu/Piscine_C_J06/ex_02
** 
** Made by Pierre Bechade
** Login   <bechad_p@epitech.net>
** 
** Started on  Mon Oct  6 12:15:37 2014 Pierre Bechade
** Last update Tue Oct  7 09:55:25 2014 Pierre Bechade
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (src[i] != '\0' && n > 0)
    {
      dest[i] = src[i];
      i++;
      n--;
    }
  if (n != 0)
    dest[i] = '\0';
  return (dest);
}
