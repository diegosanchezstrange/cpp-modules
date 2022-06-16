NAME	= karen

CC		= c++

CFLAGS	= -Werror -Wextra -Wall -std=c++98 -pedantic -fsanitize=address

SRCS	= main.cpp Karen.cpp

OBJS	= ${SRCS:.cpp=.o}

RM		= rm -rf

all: ${NAME}

%.o: %.cpp
	${CC} ${CFLAGS} -c $< -o $@

$(NAME): ${OBJS}
	${CC} ${CFLAGS} ${INCLUDE} ${OBJS} -o ${NAME}

clean:
		@${RM} ${OBJS} *.dSYM *.replace

fclean:		clean
		@${RM} ${NAME}

bonus: all

re:		fclean all

.PHONY:	clean re fclean bonus all
