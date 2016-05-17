/*
** my_addchar_list.c for  in /home/aurelien/rendu/CPE_year_Pushswap/lib/my
** 
** Made by Aurélien
** Login   <aurelien.bauer@epitech.net>
** 
** Started on  Thu Nov 12 14:25:49 2015 Aurélien
** Last update Mon Nov 23 14:01:54 2015 Aurélien
*/

typedef struct		s_list
{
  char			val;
  struct s_list		*next;
}			t_list;

#include <stdlib.h>

t_list		*my_addchar_list(t_list *list, char c)
{
  t_list	*new_list;
  t_list	*tmp_list;

  tmp_list = list;
  new_list = malloc(sizeof(*list));
  if (new_list == NULL)
    return (0);
  new_list->val = c;
  new_list->next = NULL;
  if (list == NULL)
    return (new_list);
  while (tmp_list->next != NULL)
    tmp_list = tmp_list->next;
  tmp_list->next = new_list;
  return (list);
}
