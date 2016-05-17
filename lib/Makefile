## load_2d_arr_from_file.c		\
##
## Makefile for my_MakeFile in /home/bauer_b/rendu/Piscine_C_infinadd/lib/my
## 
## Made by Aurélien BAUER
## Login   <bauer_b@epitech.net>
## 
## Started on  Mon Oct 19 10:25:08 2015 Aurélien BAUER
## Last update Tue Feb  2 09:35:28 2016 Aur�lien
##

CC	= gcc

RM	= rm -f *~

NAME	= libmy.a

SRCS	= my_putchar.c				\
	  my_putstr.c				\
	  my_putnbr.c				\
	  my_strlen.c				\
	  my_power_it.c				\
	  my_revstr.c				\
	  my_nbrlen.c				\
	  my_put_unsignednbr.c			\
	  my_printf.c				\
	  processing.c				\
	  my_getnbr.c				\
	  my_nbrlen_array.c			\
	  my_addchar_list.c			\
	  my_affelem_list.c			\
	  my_addstr_stlist.c			\
	  my_strlen_list.c			\
	  my_switch_list.c			\
	  my_supprelem_list.c			\
	  my_clchar_in_str.c			\
	  my_strcat.c				\
	  uint_to_char.c			\
	  swap_elem.c				\
	  fs_open_file.c			\
	  fs_understand_return_of_read.c	\
	  mem_allo_2d_array.c			\
	  get_next_line.c			\
	  my_str_to_wordtab.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)	\
	&& ranlib $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) libmy.a

re: fclean all

.PHONY: all fclean re
