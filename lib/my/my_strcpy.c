/*
** my_strcpy.c for strcpy in /home/bechad_p/rendu/Piscine_C_J06/ex_01
** 
** Made by Pierre Bechade
** Login   <bechad_p@epitech.net>
** 
** Started on  Mon Oct  6 08:59:03 2014 Pierre Bechade
** Last update Tue Oct  7 09:14:01 2014 Pierre Bechade
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while ((src[i] != '\0') || (dest[i] != '\0'))
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
