/*
** my_put_nbr.c for my_put_nbr in /home/bechad_p/rendu/Piscine_C_J03
** 
** Made by Pierre Bechade
** Login   <bechad_p@epitech.net>
** 
** Started on  Wed Oct  1 09:33:49 2014 Pierre Bechade
** Last update Sat Nov  1 15:25:32 2014 Pierre Bechade
*/

void	my_calcule2(int nb)
{
  if (nb == -2147483648)
    {
      my_putchar('-');
      my_putchar('2');
      my_putchar('1');
      my_putchar('4');
      my_putchar('7');
      my_putchar('4');
      my_putchar('8');
      my_putchar('3');
      my_putchar('6');
      my_putchar('4');
      my_putchar('8');
    }
  else
    {
      if (nb < 0)
	{
	  my_putchar('-');
	  nb = nb * -1;
      }
      if (nb >= 10)
	my_calcule2(nb / 10);
      my_putchar(nb % 10 + '0');
    }
}

int	my_put_nbr(int nb)
{
  my_calcule2(nb);
  return (0);
}
