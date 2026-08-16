CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = main.c push_swap_utils_1.c push_swap_utils_2.c push_swap_utils_3.c \
		dl_list_utils.c sorting_complex_algo.c \
		sorting_manual.c sorting_medium_algo.c push_swap_utils_4.c
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
