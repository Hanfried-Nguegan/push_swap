CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = 

OBJS = ${SRCS:.c=.o}
NAME = push_swap

all: $(OBJS)
	${CC} ${CFLAGS} -o ${NAME} ${OBJS}
clean:
	rm -f ${OBJS}
fclean:
	rm -f ${NAME}
re: fclean all
debug: CFLAGS += -g
debug: re
$(NAME): all
