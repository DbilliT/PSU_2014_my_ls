/*
** my_isneg.c for my_isneg in /home/bechad_p/rendu/Piscine_C_J03
** 
** Made by Pierre Bechade
** Login   <bechad_p@epitech.net>
** 
** Started on  Wed Oct  1 09:20:42 2014 Pierre Bechade
** Last update Thu Oct  2 18:48:21 2014 Pierre Bechade
*/

int	my_isneg(int n)
{
  if (n < 0)
    my_putchar('N');
  else
    my_putchar('P');
  my_putchar('\n');
  return (0);
}
