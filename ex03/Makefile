SRCS	= main.cpp \
		  Weapon.class.cpp \
		  HumanA.class.cpp \
		  HumanB.class.cpp

OBJS	=  ${SRCS:.cpp=.o}

NAME	= ex03
CC		= c++
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror -std=c++98

all:	${NAME}

${NAME}:	${OBJS}
	@${CC} ${CFLAGS} -o ${NAME} ${SRCS}

clean:
		${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:		fclean all

.PHONY: all clean fclean re
