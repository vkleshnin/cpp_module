CPP = c++

CPPFLAGS = -Wall -Wextra -Werror

SRCS = main.cpp PhoneBook.cpp Contact.cpp

HEAD = PhoneBook.hpp Contact.hpp

NAME = phonebook

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
