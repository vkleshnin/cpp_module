CPP = c++

FLAGV = -std=c++98

CPPFLAGS = ${FLAGV} -Wall -Wextra -Werror -Wshadow

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

HEAD = ClapTrap.hpp ClapTrap.hpp FragTrap.hpp DiamondTrap.hpp

NAME = ex03

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
