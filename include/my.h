/*
** my.h for my_h_ in /home/bauer_b/rendu/Piscine_C_infinadd/include
** 
** Made by Aurélien BAUER
** Login   <bauer_b@epitech.net>
** 
** Started on  Mon Oct 26 19:04:41 2015 Aurélien BAUER
** Last update Thu Jan 14 09:55:21 2016 Aur�lien
*/

#ifndef MY_H_
# define MY_H_

typedef struct          s_coord
{
  int			x;
  int			y;
}			t_coord;

typedef struct		s_coinit
{
  t_coord		p;
  t_coord		*o;
  t_coord		*x;
}			t_coinit;

int		my_power_it(int nb, int power);
void		my_putchar(char c);
char		my_putnbr(int nbr);
int		my_putstr(char *str);
int		my_strlen(char *str);
int		my_nbrlen(int nbr);
char		*my_revstr(char *str);
int		my_put_unsignednbr(unsigned int nbr);
int		my_printf(const char *str, ...);
int		put_convert_to_nbase(unsigned int nbr, int base, char b);
int		put_convert_to_oct(char rest);
int		maj_S(const char *str);
int		make_d_i(int nbr);
int		make_c(int c);
int		make_s(char *str);
int		make_u(unsigned int nbr);
int		make_p(long long nbr);
int		my_getnbr(char  *str);
int		my_nbrlen_array(int *array);
char		*my_clchar_in_str(char *str, char car);
char		*my_strcat(char *data, char *add);
char		*uint_to_char(unsigned int nbr);
char		**load_2d_arr_from_file(char *filepath, int *nb_rows, int *nb_cols);
char		**mem_allo_2d_array(int nb_rows, int nb_cols);
int		fs_open_file(char *filepath);
void		fs_understand_return_of_read(int fd, char *buffer, int size);
char		*get_next_line(const int fd);
t_coord         where_is_p(char **map);
char		**mouve_left(char **map, t_coord player);
char		**mouve_right(char **map, t_coord player);
char		**mouve_up(char **map, t_coord player);
char		**mouve_down(char **map, t_coord player);
t_coord		*find_O(char **map);
int		find_elem(char **map, char c);
t_coord         *find_coord_elem(char **map, char c);
char		**re_print_O(char **map, t_coord *place_O, int nb_O);
int             enf_of_game(t_coord *place_X, t_coord *place_O, int nb_elem);
char            **reset_map(char **map, t_coord player, t_coinit init, int nb);
int		map_is_clean(char **map);
char            **open_test_make_map();
char            **make_map(char **map, int fd);

#endif /* !MY_H_ */
