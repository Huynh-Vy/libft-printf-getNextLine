# Variables
NAME = libftprintf.a

SRCS = ./src/ft_printf.c \
		./src/ft_putptr.c \
		./src/ft_putchar.c \
		./src/ft_putnbr.c \
		./src/ft_putnbr_u.c \
		./src/ft_putstr.c \
		./src/ft_puthex.c \

OBJS = $(SRCS:%.c=%.o)

HEADER = ./includes/ft_printf.h

CC = gcc

CFLAGS = -Wall -Wextra -Werror

# Main target
all: ${NAME}

# Rule to build the target
${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

# Rule to compile each source file to object file
%.o: %.c ${HEADER}
	${CC} ${CFLAGS} -c $< -o $@

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all re clean fclean


