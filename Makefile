##
## Makefile for make in /home/bechad_p/Bistro
## 
## Made by Pierre Bechade
## Login   <bechad_p@epitech.net>
## 
## Started on  Mon Oct 13 17:59:53 2014 Pierre Bechade
## Last update Sun Nov  2 22:17:25 2014 Pierre Bechade
##

CC	=	gcc

RM	=	rm -f

CFLAGS	+=	-Werror -Wall -W -Wextra -g3

CFLAGS	+=	-I./include/

CFLAGS	+=	-L./lib/my/ -lmy

NAME	=	my_ls

LIBN	=	libmy.a

SRCS	=	main.c			\
		x_opendir.c		\
		my_trie.c		\
		my_recup_param.c	\
		basic_functions.c	\
		my_parse_option.c	\
		my_apply_ls.c		\
		my_ls_l.c		\
		my_ls_simple.c		\
		my_type_total.c		\
		my_ls_r.c		\
		my_ls_lr.c		\
		my_aff_link.c

OBJS 	=	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	
		make re -C lib/my/
		$(RM) $(OBJS)
		$(CC) -c $(SRCS) $(CFLAGS)
		$(CC) $(OBJS) -o $(NAME) $(CFLAGS)

clean:
		make clean -C lib/my/
		$(RM) $(OBJS)

fclean: 	clean
		$(RM) $(NAME)

re:		
		make clean -C lib/my/
		make re -C lib/my/
		$(RM) $(OBJS)
		$(CC) -c $(SRCS) $(CFLAGS)
		$(CC) $(OBJS) -o $(NAME) $(CFLAGS)

.PHONY: 	all clean fclean re
