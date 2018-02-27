/*
** my_getnbr.c for getnbr in /home/bechad_p/rendu/Piscine_C_J04
** 
** Made by Pierre Bechade
** Login   <bechad_p@epitech.net>
** 
** Started on  Thu Oct  2 09:38:51 2014 Pierre Bechade
** Last update Fri Oct 10 19:49:38 2014 Pierre Bechade
*/

int	my_calcule3(char *str, int i, double nb_final, int nb_return)
{
  while ((str[i] != '\0') && ((str[i] >= '0') && (str[i] <= '9'))
	 || ((str[i] == '-') || (str[i] == '+')))
    {
      if (str[i] >= '0' && str[i] <= '9')
	nb_final = (nb_final * 10) + (str[i] - 48);
      if (str[i] == '-')
	nb_return = nb_return + 1;
      i++;
    }
  if ((nb_return % 2) != 0)
    nb_final = nb_final - (2 * nb_final);
  if (nb_final > 2147483647 || nb_final < -2147483648)
    return (0);
  nb_return = nb_final;
  return (nb_return);
}

int		my_getnbr(char *str)
{
  int		result;
  double	nb_final;
  int		i;
  int		nb_return;

  result = 0;
  nb_final = 0;
  i = 0;
  nb_return = 0;
  result = my_calcule3(str, i, nb_final, nb_return);
  return (result);
}
