/*
** my_strlcat.c for my_strlcat in /home/bechad_p/rendu/Piscine_C_J07/ex_05
** 
** Made by Pierre Bechade
** Login   <bechad_p@epitech.net>
** 
** Started on  Wed Oct  8 13:24:40 2014 Pierre Bechade
** Last update Wed Oct  8 20:57:59 2014 Pierre Bechade
*/

int	my_strlcat(char *dest, char *src, int size)
{
  int	i;
  int	tmp;
  int	z;
  int	d;

  i = 0;
  tmp = 0;
  z = my_strlen(src);
  d = my_strlen(dest);
  if (d > size)
    return (z + size);
  while (src[i] != '\0')
    {
      dest[tmp] = src[i];
      i++;
      tmp++;
    }
  dest[tmp] = '\0';
  return (0);
}
