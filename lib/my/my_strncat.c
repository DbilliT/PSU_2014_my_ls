/*
** my_strncat.c for my_strncat in /home/bechad_p/rendu/Piscine_C_J07/ex_01
** 
** Made by Pierre Bechade
** Login   <bechad_p@epitech.net>
** 
** Started on  Wed Oct  8 09:55:34 2014 Pierre Bechade
** Last update Wed Oct  8 14:05:44 2014 Pierre Bechade
*/

char	*my_strncat(char *dest, char *src, int nb)
{
  int	size;
  int	i;

  size = my_strlen(dest);
  i = 0;

  while (i < nb && src[i] != '\0')
    {
      dest[size + i] = src[i];
      i++;
    }
  dest[size + i] = '\0';
  return (dest);
}
