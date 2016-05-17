/*
** my_strlen_list.c for  in /home/aurelien/rendu/CPE_year_Pushswap
** 
** Made by Aurélien
** Login   <aurelien.bauer@epitech.net>
** 
** Started on  Fri Nov 13 17:26:42 2015 Aurélien
** Last update Sun Nov 29 16:31:31 2015 Aurélien
*/

#include <stdlib.h>

typedef struct          s_list
{
  char			*data;
  struct s_list         *next;
}                       t_list;

int	my_strlen_list(t_list *list)
{
  int	i;

  i = 0;
  while (list != NULL)
    {
      list = list->next;
      i++;
    }
  return (i);
}
