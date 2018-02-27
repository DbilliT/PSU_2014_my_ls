/*
** my_strcat.c for my_strcat in /home/bechad_p/rendu/Piscine_C_J07/ex_01
** 
** Made by Pierre Bechade
** Login   <bechad_p@epitech.net>
** 
** Started on  Wed Oct  8 09:49:44 2014 Pierre Bechade
** Last update Wed Oct  8 14:05:08 2014 Pierre Bechade
*/

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (dest[i] != '\0')
    i++;
  while (src[j] != '\0')
    {
      dest[i] = src[j];
      j++;
      i++;
    }
  return (dest);
}
