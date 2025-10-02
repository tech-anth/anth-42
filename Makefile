CC = cc
AR = ar
NAME = libft.a

ARFLAGS = rcs
CFLAGS = -std=c99 -Wall -Wextra -Werror -Wpedantic
CPPFLAGS = -I./includes

SRC :=  ft_putchar.c \
	ft_putstr.c
OBJ := $(SRC: .c=.o)

REMOVE = @rm -f
HEADER = ./includes/libft.h

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(ARFLAGS) $@ $^

%.o: %.c $(HEADER)
	@$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

clean:
	$(REMOVE) $(OBJ)
	@echo "cleaned"

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all

.PHONY: all clean fclean re
