NAME		= libft.a

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

INCLUDE		= -I include/

FCN			= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_tolower.c ft_toupper.c ft_memset.c ft_bzero.c ft_memcpy.c

FCNF		= ./

SRC			= $(addprefix ${FCNF}, $(FCN))

OBJ			= ${SRC:.c=.o}

RM			= rm -f

.c.o	:
			${CC} ${CFLAGS} ${INCLUDE} -c $< -o $@

all		:	${NAME}

${NAME}	:	${OBJ}
			ar rc ${NAME} ${OBJ}
			ranlib ${NAME}

clean 	:
			${RM} ${OBJ}

fclean	:	clean
			${RM} ${NAME}

re		:	fclean all

so:
			$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
			gcc -nostartfiles -shared -o libft.so $(OBJ)

.PHONY	:	all clean fclean re
