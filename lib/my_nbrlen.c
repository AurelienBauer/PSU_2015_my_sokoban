/*
** my_nbrlen.c for  in /home/aurelien/rendu/PSU_2015_my_printf
** 
** Made by Aur�lien
** Login   <aurelien.bauer@epitech.net>
** 
** Started on  Fri Nov  6 18:22:43 2015 Aur�lien
** Last update Fri Nov  6 18:43:48 2015 Aur�lien
*/

int	my_nbrlen(int nbr)
{
  int	i;

  i = 0;
  while (nbr > 0)
    {
      nbr = nbr / 10;
      i++;
    }
  return (i);
}
