NAME			=	libftprintf.a
CC				=	cc
INCLUDE			= 	Libft
CFLAGS			=	-Wall -Wextra -Werror -I(INCLUDE)
RM				=	rm -rf
AR				=	ar rcs
SRCS			=	
# BONUS_SRCS		=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
# 					ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
# 					ft_lstmap.c
OBJS			=	$(patsubst %.c, %.o, $(SRCS)) # generating .o filenames from src files`.c ex` ft_atoi.c -> ft_atoi.o
# BONUS_OBJS		=	$(patsubst %.c, %.o, $(BONUS_SRCS)) # same for bonus filenames
.DEFAULT_GOAL	=	all

%.o:	%.c # compiles src files`.c and generate .o files ex` ft_atoi.c -> ft_atoi.o
	$(CC) $(CFLAGS) -c $< -o $@

all:	$(NAME)

$(NAME):	$(OBJS) # add only newer objects to the archive
	$(AR)	$(NAME) $?

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

bonus:	$(BONUS_OBJS)
	$(AR)	$(NAME) $?

.PHONY:	all clean fclean re bonus
