/*
** control.c for  in /home/aurelien/rendu/PSU_2015_my_sokoban
** 
** Made by Aurélien
** Login   <aurelien.bauer@epitech.net>
** 
** Started on  Thu Jan  7 17:10:15 2016 Aurélien
** Last update Fri Jan  8 15:32:45 2016 Aurélien
*/

#include <ncurses.h>
#include <stdlib.h>
#include "my.h"

char		**mouve_left(char **map, t_coord player)
{
  if (map[player.y][player.x - 1] == 'X' && map[player.y][player.x - 2] != '#'
      && map[player.y][player.x - 2] != 'X')
    {
      map[player.y][player.x - 2]= 'X';
      map[player.y][player.x - 1] = 'P';
      map[player.y][player.x] = ' ';
    }
  else if (map[player.y][player.x - 1] != '#' &&
	   map[player.y][player.x - 1] != 'X')
    {
      map[player.y][player.x - 1] = 'P';
      map[player.y][player.x] = ' ';
    }
  return (map);
}

char		**mouve_right(char **map, t_coord player)
{
  if (map[player.y][player.x + 1] == 'X' && map[player.y][player.x + 2] != '#'
      && map[player.y][player.x + 2] != 'X')
    {
      map[player.y][player.x + 2]= 'X';
      map[player.y][player.x + 1] = 'P';
      map[player.y][player.x] = ' ';
    }
  if (map[player.y][player.x + 1] != '#' && map[player.y][player.x + 1] != 'X')
    {
      map[player.y][player.x + 1] = 'P';
      map[player.y][player.x] = ' ';
    }
  return (map);
}

char		**mouve_up(char **map, t_coord player)
{
  if (map[player.y - 1][player.x] == 'X' && map[player.y - 2][player.x] != '#'
      && map[player.y - 2][player.x] != 'X')
    {
      map[player.y - 2][player.x]= 'X';
      map[player.y - 1][player.x] = 'P';
      map[player.y][player.x] = ' ';
    }
  if (map[player.y - 1][player.x] != '#' && map[player.y - 1][player.x] != 'X')
    {
      map[player.y - 1][player.x] = 'P';
      map[player.y][player.x] = ' ';
    }
  return (map);
}

char		**mouve_down(char **map, t_coord player)
{
  if (map[player.y + 1][player.x] == 'X' && map[player.y + 2][player.x] != '#'
      && map[player.y + 2][player.x] != 'X')
    {
      map[player.y + 2][player.x]= 'X';
      map[player.y + 1][player.x] = 'P';
      map[player.y][player.x] = ' ';
    }
  if (map[player.y + 1][player.x] != '#' && map[player.y + 1][player.x] != 'X')
    {
      map[player.y + 1][player.x] = 'P';
      map[player.y][player.x] = ' ';
    }
  return (map);
}

char		**reset_map(char **map, t_coord player, t_coinit init, int nb)
{
  t_coord	*cd;
  int		i;

  i = -1;
  map[player.y][player.x] = ' ';
  map[init.p.y][init.p.x] = 'P';
  cd = find_coord_elem(map, 'X');
  while(++i < nb)
    {
      map[cd[i].y][cd[i].x] = ' ';
      map[init.x[i].y][init.x[i].x] = 'X';
    }
  return (map);
}
