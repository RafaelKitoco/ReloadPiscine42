CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iincludes

SRCS_DIR = srcs
INCLUDES = includes

SRCS = $(SRCS_DIR)/ft_putchar.c \
       $(SRCS_DIR)/ft_putstr.c \
       $(SRCS_DIR)/ft_strcmp.c \
       $(SRCS_DIR)/ft_strlen.c \
       $(SRCS_DIR)/ft_swap.c

OBJS = $(SRCS:.c=.o)

LIB = libft.a

all: $(LIB)

$(LIB): $(OBJS)
	ar rcs $(LIB) $(OBJS)

%.o: %.c $(INCLUDES)/*.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(LIB)

re: fclean all
