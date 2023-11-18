NAME			= libft.a

SRCS			= ${shell find ./ -maxdepth 1 -type f -name '*.c'}
OBJS			= ${SRCS:%.c=%.o}

CFLAGS 			= -Wall -Wextra -Werror
CC 				= cc
RM				= rm -rf

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<
	
$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
    
clean:
	${RM} $(OBJS)
	${RM} .ft_*
	${RM} .*.swp

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re