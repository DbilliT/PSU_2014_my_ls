/*
** my_strlen.c for strlen in /home/bechad_p/rendu/Piscine_C_J04
** 
** Made by Pierre Bechade
** Login   <bechad_p@epitech.net>
** 
** Started on  Thu Oct  2 09:15:48 2014 Pierre Bechade
** Last update Fri Oct  3 17:58:40 2014 Pierre Bechade
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i = i + 1;
  return (i);
}
