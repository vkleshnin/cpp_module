CPP = c++

FLAGV = -std=c++98

CPPFLAGS = ${FLAGV} -Wall -Wextra -Werror

SRCS = main.cpp Base.cpp A.cpp B.cpp C.cpp

HEAD = Base.hpp A.hpp B.hpp C.hpp

NAME = ex02

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
