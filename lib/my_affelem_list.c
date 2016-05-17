/*
** my_aff_list.c for  in /home/aurelien/rendu/CPE_year_Pushswap/lib/my
** 
** Made by Aurélien
** Login   <aurelien.bauer@epitech.net>
** 
** Started on  Wed Nov 11 14:10:11 2015 Aurélien
** Last update Sun Nov 29 18:13:40 2015 Aurélien
*/

#include <stdlib.h>

void			my_putchar(char c);
void			my_putstr(char *str);

typedef struct          s_list
{
  char			*data;
  struct s_list         *next;
}                       t_list;

void                    my_affelem_list(t_list *list)
{
  while (list != NULL)
    {
      my_putstr(list->data);
      list = list->next;
    }
}
