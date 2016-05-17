 /*
** my_pop_up.c for  in /home/aurelien/rendu/PSU_2015_sokoban_bootstrap
** 
** Made by Aurélien
** Login   <aurelien.bauer@epitech.net>
** 
** Started on  Mon Jan  4 18:37:03 2016 Aurélien
** Last update Sun Jan 17 14:37:35 2016 Aurélien
*/

#include <ncurses.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"

void		aff_my_map(char **map)
{
  int		i;

  i = -1;
  while(++i < 18)
    {
      mvprintw((LINES / 2) + i - 18 / 2, (COLS / 2) - my_strlen(map[i]) / 2,
	       map[i]);
      refresh();
    }
  mvprintw((LINES / 2) + 8, (COLS / 2) - 24,
	   "Press <space> to restart and <x> to exit the game");
}

char		**change_map(char **map, int key, int nb_O, t_coinit pl)
{
  t_coord	player;

  player = where_is_p(map);
  if (key == 68)
    map = mouve_left(map, player);
  if (key == 67)
    map = mouve_right(map, player);
  if (key == 65)
    map = mouve_up(map, player);
  if (key == 66)
    map = mouve_down(map, player);
  if (key == 32)
    map = reset_map(map, player, pl, nb_O);
  map = re_print_O(map, pl.o, nb_O);
  return (map);
}

int		end_start(char **map, t_coinit initpl, int nb_O)
{
  t_coord	*place_X;

  if (enf_of_game((place_X = find_coord_elem(map, 'X')),
		  initpl.o, nb_O) == nb_O)
    {
      aff_my_map(map);
      mvprintw((LINES / 2), (COLS / 2) - 4, "Success !");
      return (1);
    }
  else
    {
      aff_my_map(map);
      return (0);
    }
}

int		sokoban(char **map)
{
  int 		key;
  int		nb_O;
  t_coinit	initpl;

  initpl.p = where_is_p(map);
  initpl.o = find_coord_elem(map, 'O');
  initpl.x = find_coord_elem(map, 'X');
  nb_O = find_elem(map, 'O');
  while (key != 'x' && end_start(map, initpl, nb_O) != 1)
  {
    if ((key = getch()) == ERR)
      exit(1);
    map = change_map(map, key, nb_O, initpl);
  }
}
int		main(int argn, char **argv)
{
  char		**map;

  if (argn < 2)
    {
      my_printf("[Usage]my_sokoban map.txt\n");
      return (0);
    }
  keypad(stdscr, TRUE);
  map = open_test_make_map(argv[1]);
  initscr();
  noecho();
  sokoban(map);
  endwin();
  return (0);
}
