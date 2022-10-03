NAME		= libft.a
CC			= gcc -MD
AR 			= ar -rcs
CFLAGS		= -Werror -Wall -Wextra
RM			= rm -f
SRCS		= 	ft_bzero.c ft_isalnum.c                \
				ft_isalpha.c ft_isascii.c ft_isdigit.c \
				ft_isprint.c ft_memset.c ft_strlen.c   \
				ft_strlcpy.c ft_memcpy.c ft_memmove.c  \
				ft_strlcat.c ft_toupper.c ft_tolower.c \
				ft_strncmp.c ft_strrchr.c ft_strchr.c  \
				ft_memchr.c ft_memcmp.c ft_strnstr.c   \
				ft_atoi.c ft_calloc.c ft_strdup.c      \
				ft_substr.c ft_strtrim.c ft_strjoin.c  \
				ft_split.c ft_itoa.c
OBJS		= ${SRCS:.c=.o}
all: ${NAME}

${NAME}	:	${OBJS}
		${AR} ${NAME} ${OBJS}

clean	:
		${RM} ${OBJS}
fclean	:	clean
		${RM} ${NAME}

so		:	
		$(CC) -fPIC $(CFLAGS) $(SRC)
		gcc -shared -o libft.so $(OBJ)

re		: fclean all

.PHONY	: clean fclean .c.o
