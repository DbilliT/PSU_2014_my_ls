/*
** my_swap.c for my_swap in /home/bechad_p/rendu/Piscine_C_J04
** 
** Made by Pierre Bechade
** Login   <bechad_p@epitech.net>
** 
** Started on  Thu Oct  2 09:09:17 2014 Pierre Bechade
** Last update Fri Oct  3 19:33:42 2014 Pierre Bechade
*/

int	my_swap(int *a, int *b)
{
  int	c;

  c = *a;
  *a = *b;
  *b = c;
  return (0);
}
