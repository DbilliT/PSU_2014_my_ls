/*
** my_power_rec.c for my_power_rec in /home/bechad_p/rendu/Piscine_C_J05
** 
** Made by Pierre Bechade
** Login   <bechad_p@epitech.net>
** 
** Started on  Sun Oct  5 21:13:14 2014 Pierre Bechade
** Last update Mon Oct  6 11:44:18 2014 Pierre Bechade
*/

int	my_power_rec(int nb, int power)
{
  if (power < 0)
    return (0);
  if (power > 0)
    return (nb * my_power_rec(nb, power - 1));
  return (1);
}
