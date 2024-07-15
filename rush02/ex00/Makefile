NAME		= rush-02

CFLAGS		= -Wall -Wextra -Werror

SRCS		= args.c by_3.c check_dict.c check.c ft_split.c main.c ressources.c utils.c work.c

OBJS		= ${SRCS:.c=.o}

${NAME}:	${OBJS}
			cc ${CFLAGS} $^ -o ${NAME}

all:		${NAME}

.c.o:
			gcc ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re