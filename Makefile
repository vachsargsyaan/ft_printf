NAME			=	libftprintf.a
CC				=	cc
CFLAGS			=	-Wall -Wextra -Werror
RM				=	rm -rf
AR				=	ar rcs
SRCS			=	ft_printnum.c ft_printf.c ft_cahrs.c ft_it.c ft_print_hex.c ft_print_point.c 

OBJS			=	$(patsubst %.c, %.o, $(SRCS)) # generating .o filenames from src files`.c ex` ft_atoi.c -> ft_atoi.o
.DEFAULT_GOAL	=	all

%.o:	%.c # compiles src files`.c and generate .o files ex` ft_atoi.c -> ft_atoi.o
	$(CC) $(CFLAGS) -c $< -o $@

all:	$(NAME)

$(NAME):	$(OBJS) # add only newer objects to the archive
	$(AR)	$(NAME) $?

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
