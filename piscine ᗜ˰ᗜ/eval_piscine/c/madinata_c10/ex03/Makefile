NAME := ft_hexdump

SOURCES := main.c printing.c utils.c convert.c

CFLAGS += -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(SOURCES)
	cc $(CFLAGS) $^ -o $@

clean:

fclean:
	rm -f $(NAME)

re: fclean all