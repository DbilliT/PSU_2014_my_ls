/*
** my_sort_int_tab.c for sort_int_tab in /home/bechad_p/rendu/Piscine_C_J04
** 
** Made by Pierre Bechade
** Login   <bechad_p@epitech.net>
** 
** Started on  Thu Oct  2 11:01:47 2014 Pierre Bechade
** Last update Fri Oct  3 18:33:55 2014 Pierre Bechade
*/

void	my_sort_int_tab(int *tab, int size)
{
  int	i;
  int	k;
  int	tmp;

  k = 1;
  i = 0;
  while (k < size)
    {
      if (tab[k] < tab[i])
	{
	  tmp = tab[k];
	  tab[k] = tab[i];
	  tab[i] = tmp;
	  i = 0;
	  k = 0;
	}
      else
	i = i + 1;
      k = k + 1;
    }
}
