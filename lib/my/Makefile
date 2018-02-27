##
## Makefile for makefile_lib_header in /home/bechad_p/rendu/Piscine_C_J11/lib/my
## 
## Made by Pierre Bechade
## Login   <bechad_p@epitech.net>
## 
## Started on  Sat Oct 18 18:40:28 2014 Pierre Bechade
## Last update Mon Oct 27 14:20:26 2014 Pierre Bechade
##

CC	=	gcc -c

RM	=	rm -f

HH	=	cp my.h ../../include/

RMHH	=	../../include/my.h

SRCS	=	my_find_prime_sup.c	\
		my_getnbr.c		\
		my_isneg.c		\
		my_is_prime.c		\
		my_power_rec.c		\
		my_putchar.c		\
		my_put_nbr.c		\
		my_putstr.c		\
		my_revstr.c		\
		my_showmem.c		\
		my_showstr.c		\
		my_show_wordtab.c	\
		my_sort_int_tab.c	\
		my_square_root.c	\
		my_strcapitalize.c	\
		my_strcat.c		\
		my_strcmp.c		\
		my_strcpy.c		\
		my_strdup.c		\
		my_str_isalpha.c	\
		my_str_islower.c	\
		my_str_isnum.c		\
		my_str_isprintable.c	\
		my_str_isupper.c	\
		my_strlcat.c		\
		my_strlen.c		\
		my_strlowcase.c		\
		my_strncat.c		\
		my_strncmp.c		\
		my_strncpy.c		\
		my_strstr.c		\
		my_str_to_wordtab.c	\
		my_strupcase.c		\
		my_swap.c

NAME	=	libmy.a

SPE	=	ar rc libmy.a *.o

SPEC	=	ranlib libmy.a

MOVE	=	cp libmy.a ..

RMMOVE	=	../libmy.a

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(SRCS) $(CFLAGS)
	$(SPE)
	$(SPEC)
	$(MOVE)
	$(HH)

clean:
	$(RM) $(OBJS)
	$(RM) $(RMHH)
	$(RM) $(RMMOVE)
	$(RM) $(NAME)

fclean: clean

re: fclean all
