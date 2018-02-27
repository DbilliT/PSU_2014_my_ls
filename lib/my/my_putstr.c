/*
** my_putstr.c for putstr in /home/bechad_p/rendu/Piscine_C_J04
** 
** Made by Pierre Bechade
** Login   <bechad_p@epitech.net>
** 
** Started on  Thu Oct  2 09:11:12 2014 Pierre Bechade
** Last update Fri Oct  3 17:57:48 2014 Pierre Bechade
*/

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
  return (0);
}
