CPP = c++

FLAGV = -std=c++98

CPPFLAGS = ${FLAGV} -Wall -Wextra -Werror

SRCS =	main.cpp Bureaucrat.cpp Form.cpp\
		ShrubberyCreationForm.cpp\
		RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

HEAD =	Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp\
		RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp

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
