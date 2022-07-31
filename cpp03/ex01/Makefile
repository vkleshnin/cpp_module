CPP = c++

FLAGV = -std=c++98

CPPFLAGS = ${FLAGV} -Wall -Wextra -Werror

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp

HEAD = ClapTrap.hpp ClapTrap.hpp

NAME = ex01

OBJS = ${SRCS:.cpp=.o}

RM = rm -f

.cpp.o:
			${CPP} ${CPPFLAGS} -c $< -o ${<:.cpp=.o}

${NAME}:	${OBJS}
			${CPP} ${CPPFLAGS} $^ -o $@

${OBJS}:	${HEAD}

all:		${NAME}

clean:
		${RM} ${OBJS}

re:			fclean all

fclean:		clean
			${RM} ${NAME}

.PHONY:		all clean fclean re
