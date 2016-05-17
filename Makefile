##
## Makefile for  in /home/aurelien/rendu/PSU_2015_my_ls
## 
## Made by Aurélien
## Login   <aurelien.bauer@epitech.net>
## 
## Started on  Thu Nov 26 15:34:08 2015 Aurélien
## Last update Wed Jan 13 17:10:28 2016 Aurélien
##

RM	= rm -f									\

CC	= gcc -g								\

NAME	= my_sokoban								\

CFLAGS	= -lmy -L ./lib -I ./include -lncurses					\

SRCS	= my_sokoban.c								\
	  control.c								\
	  found_elem.c								\
	  parsing.c

OBJS	= $(SRCS:.c=.o)								\

all: $(NAME)


$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(CFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) *~

re: fclean all

.PHONY: all clean re
