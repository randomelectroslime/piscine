NAME := ft_tail

SOURCES := main.c ft_atoi.c msg.c utils.c

CFLAGS += -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(SOURCES)
	cc $(CFLAGS) $^ -o $@

clean:

fclean:
	rm -f $(NAME)

re: fclean all