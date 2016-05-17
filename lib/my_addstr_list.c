/*
** my_addstr_list.c for  in /home/aurelien/rendu/CPE_year_Pushswap/lib/my
** 
** Made by Aur�lien
** Login   <aurelien.bauer@epitech.net>
** 
** Started on  Wed Nov 11 14:07:29 2015 Aur�lien
** Last update Mon Nov 23 14:05:54 2015 Aur�lien
*/

typedef struct          s_list
{
  int                   val;
  struct s_list         *next;
}			t_list;

t_list			*my_addchar_list(t_list *list, int new_val);

t_list                  *my_addstr_list(t_list *list, char *str)
{
  while (*str != '\0')
    {
      list = my_addchar_list(list, *str);
      str++;
    }
  return (list);
}
