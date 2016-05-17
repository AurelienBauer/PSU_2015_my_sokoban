
/*
** my_supprelem_list.c for  in /home/aurelien/rendu/CPE_year_Pushswap
** 
** Made by Aurélien
** Login   <aurelien.bauer@epitech.net>
** 
** Started on  Mon Nov 16 15:11:12 2015 Aurélien
** Last update Mon Nov 16 16:46:11 2015 Aurélien
*/

#include <stdlib.h>

void	my_putchar(char c);

typedef struct          s_list
{
  char                  val;
  struct s_list         *next;
}                       t_list;

t_list  *my_supprelem_list(t_list *list, int elem)
{
  while (--elem > -1)
    list = list->next;
  list->next = NULL;
  return (list);
}
