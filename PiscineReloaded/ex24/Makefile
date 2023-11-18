# Name of the executable
NAME			= libft.a

# Directories
SRCSDIR			= srcs/
HDRDIR			= includes/

# Sources
HDRS 			= -I ${HDRDIR}
SRCS			= ${shell find ${SRCSDIR} -maxdepth 1 -type f -name '*.c'}
OBJS			= ${SRCS:%.c=%.o}

CC				= cc
CFLAGS			= -Werror -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
    ar rc $(NAME) $(OBJS)

clean:
    rm -f srcs/*.o

fclean: clean
    rm -f *.a
    rm -f *t

re: fclean all

.PHONY: all clean fclean re