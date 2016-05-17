/*
** found_elem.c for  in /home/aurelien/rendu/PSU_2015_my_sokoban
** 
** Made by Aurélien
** Login   <aurelien.bauer@epitech.net>
** 
** Started on  Thu Jan  7 18:21:46 2016 Aurélien
** Last update Fri Jan  8 15:34:08 2016 Aurélien
*/

#include <ncurses.h>
#include <stdlib.h>
#include "my.h"

t_coord         where_is_p(char **map)
{
  t_coord       player;

  player.y = 0;
  while (map[player.y])
    {
      player.x = 0;
      while (map[player.y][player.x])
	{
	  if (map[player.y][player.x] == 'P')
	    return (player);
	  player.x++;
	}
      player.y++;
    }
  my_printf("[ERROR]Player not found !\n");
  exit(1);
}

int		find_elem(char **map, char c)
{
  int		count;
  t_coord	parc;

  count = 0;
  parc.y = 0;
  while (map[parc.y])
    {
      parc.x = 0;
      while (map[parc.y][parc.x])
	{
	  if (map[parc.y][parc.x] == c)
	    count++;
	  parc.x++;
	}
      parc.y++;
    }
  return (count);
}

t_coord		*find_coord_elem(char **map, char c)
{
  t_coord	*coord;
  t_coord	parc;
  int		nb;
  int		i;

  nb = find_elem(map, c);
  i = 0;
  if ((coord = malloc(sizeof(int) * nb * 2)) == NULL)
    exit(1);
  parc.y = 0;
  while (map[parc.y])
    {
      parc.x = 0;
      while (map[parc.y][parc.x])
	{
	  if (map[parc.y][parc.x] == c)
	    {
	      coord[i] = parc;
	      i++;
	    }
	  parc.x++;
	}
      parc.y++;
    }
  return (coord);
}

char		**re_print_O(char **map, t_coord *place_O, int nb_O)
{
  int		i;

  i = -1;
  while(++i < nb_O)
    {
      if(map[place_O[i].y][place_O[i].x] == ' ')
	map[place_O[i].y][place_O[i].x] = 'O';
    }
  return (map);
}

int		enf_of_game(t_coord *place_X, t_coord *place_O, int nb_elem)
{
  int		rtvalue;
  int		i;
  int		j;

  rtvalue = 0;
  j = -1;
  while (++j < nb_elem)
    {
      i = -1;
      while (++i < nb_elem)
	{
	  if (place_X[i].x == place_O[j].x && place_X[i].y == place_O[j].y)
	    {
	      rtvalue++;
	    }
	}
    }
  return (rtvalue);
}
