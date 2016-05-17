/*
** parsing.c for  in /home/aurelien/rendu/PSU_2015_my_sokoban
** 
** Made by Aurélien
** Login   <aurelien.bauer@epitech.net>
** 
** Started on  Fri Jan  8 15:46:31 2016 Aurélien
** Last update Thu Jan 14 11:01:29 2016 Aurélien
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"

int	map_is_clean(char **map)
{
  t_coord       parc;

  parc.y = 0;
  while (map[parc.y])
    {
      parc.x = 0;
      while (map[parc.y][parc.x])
	{
	  if (map[parc.y][parc.x] != 'X' && map[parc.y][parc.x] != ' ' &&
	      map[parc.y][parc.x] != 'O' && map[parc.y][parc.x] != '#' &&
	      map[parc.y][parc.x] != '\0' && map[parc.y][parc.x] != '\n' &&
	      map[parc.y][parc.x] != 'P')
	    return (0);
	  parc.x++;
	}
      parc.y++;
    }
  return (1);
}

char            **make_map(char **map, int fd)
{
  char          *buffer;
  int           i;

  i = 0;
  map = mem_allo_2d_array(100, 100);
  while ((buffer = get_next_line(fd)) != NULL)
    {
      map[i] = buffer;
      i++;
    }
  return (map);
}

char            **open_test_make_map(char *txtmap)
{
  char          **map;
  int           fd;

  fd = fs_open_file(txtmap);
  map = make_map(map, fd);
  if (map_is_clean(map) != 1)
    {
      my_printf("[ERROR]Wrong character in map !\n");
      exit(1);
    }
  if ((find_elem(map, 'O') != find_elem(map, 'X')) ||
      (find_elem(map, 'X') < 1 ) || (find_elem(map, 'O') < 1))
    {
      my_printf("[ERROR]map incorrect !");
      exit (1);
    }
  if (close(fd) == -1)
    {
      my_printf("[ERROE]Close file\n");
      exit(1);
    }
  return (map);
}
