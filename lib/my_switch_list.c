/*
** my_switch_list.c for  in /home/aurelien/rendu/CPE_year_Pushswap/lib/my
** 
** Made by Aurélien
** Login   <aurelien.bauer@epitech.net>
** 
** Started on  Wed Nov 11 14:11:08 2015 Aurélien
** Last update Sun Nov 29 19:20:11 2015 Aurélien
*/

typedef struct          s_list
{
  char                  *data;
  struct s_list         *next;
}                       t_list;

t_list                  *my_switch_list(t_list *list, int a, int b)
{
  int                   i;
  char			*tmp;
  t_list                *new_list;
  t_list		*new_sc_list;

  new_list = list;
  new_sc_list = list;
  i = -1;
  while(++i < a)
    new_sc_list = new_sc_list->next;
  i = -1;
  while(++i <  b)
    new_list = new_list->next;
  tmp = new_sc_list->data;
  new_sc_list->data = new_list->data;
  new_list->data = tmp;
  return (list);
}
