/*
** my_getnbr.c for my_getnbr in /home/saubus_a
** 
** Made by alexandre saubusse
** Login   <saubus_a@epitech.net>
** 
** Started on  Fri Oct 23 14:58:41 2015 alexandre saubusse
** Last update Mon Dec  7 12:23:37 2015 Aurélien
*/

int	my_getnbr(char	*str)
{
  int	nb;
  int	i;
  int	signe;

  i = 0;
  nb = 0;
  while (str[i] < 48 || str[i] > 57)
    i = i + 1;
  while (str[i] > 47 && str[i] < 58)
    {
      nb = (nb * 10) + (str[i] - '0');
      if (str[i - 1] == '-')
	signe = 1;
      i = i + 1;
    }
  if (signe == 1)
    nb = nb * -1;
  return (nb);
}
