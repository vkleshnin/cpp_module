CPP = c++

FLAGV = -std=c++98

CPPFLAGS = ${FLAGV} -Wall -Wextra -Werror

SRCS = main.cpp

HEAD =

NAME = ex04

OBJS = ${SRCS:.cpp=.o}

RM = rm -f

.cpp.o:
			${CPP} ${CPPFLAGS} -c $< -o ${<:.cpp=.o}

${NAME}:	${OBJS}
			${CPP} ${CPPFLAGS} $^ -o $@

${OBJS}: ${HEAD}

all:		${NAME}

clean:
		${RM} ${OBJS}

re:			fclean all

fclean:		clean
			${RM} ${NAME}

.PHONY:		all clean fclean re
