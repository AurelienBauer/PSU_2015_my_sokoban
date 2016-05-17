/*
** my_addchar_stlist.c for  in /home/aurelien/rendu/CPE_year_Pushswap
** 
** Made by Aurélien
** Login   <aurelien.bauer@epitech.net>
** 
** Started on  Fri Nov 13 18:04:55 2015 Aurélien
** Last update Wed Nov 25 17:40:09 2015 Aurélien
*/

#include <stdlib.h>

typedef struct          s_list
{
  char                  *data;
  struct s_list         *next;
}                       t_list;

t_list			*my_addstr_stlist(t_list *list, char *data)
{
  t_list		*new_list;

  new_list = malloc(sizeof(*list));
  if (new_list == NULL)
    return (0);
  new_list->data = data;
  new_list->next = list;
  return (new_list);
}
