NAME	= accounts

CC		= c++

CFLAGS	= -Werror -Wextra -Wall -std=c++98 -pedantic -fsanitize=address

SRCS	= test.cpp Account.cpp

OBJS	= ${SRCS:.cpp=.o}

RM		= rm -rf

all: ${NAME}

.c.o:
	${CC} ${CFLAGS} -c -I${LIBFT}inc $< -o ${<:.c=.o}

$(NAME): ${OBJS}
	${CC} ${CFLAGS} ${INCLUDE} ${OBJS} -o ${NAME}

clean:
		@${RM} ${OBJS} *.dSYM

fclean:		clean
		@${RM} ${NAME}

bonus: all

re:		fclean all

.PHONY:	clean re fclean bonus all
