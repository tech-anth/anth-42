CC = cc
AR = ar
NAME = libft.a

ARFLAGS = rcs
CFLAGS = -Wall -Wextra -Werror
CPPFLAGS = -I./

SRC :=  ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c
BONUS_SRC = ft_lstnew.c \
	    ft_lstadd_front.c \
	    ft_lstsize.c \
	    ft_lstlast.c \
	    ft_lstadd_back.c \
	    ft_lstdelone.c \
	    ft_lstclear.c \
	    ft_lstiter.c \
	    ft_lstmap.c
OBJ := $(SRC:.c=.o)
BONUS_OBJ := $(BONUS_SRC:.c=.o)

REMOVE = @rm -f

HEADER = ./libft.h

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(ARFLAGS) $@ $^

bonus: $(OBJ) $(BONUS_OBJ)
	@$(AR) $(ARFLAGS) $(NAME) $^

%.o: %.c $(HEADER)
	@$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

clean:
	$(REMOVE) $(OBJ) $(BONUS_OBJ)
	@echo "cleaned"

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all

call: re bonus
	@$(CC) $(CPPFLAGS) $(CFLAGS) main.c $(NAME) -o app
	@echo "\n"
	@./app

.PHONY: all clean fclean re bonus call
