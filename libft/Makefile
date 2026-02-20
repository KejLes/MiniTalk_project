CC := gcc
CFLAGS= -Wall -Wextra -Werror -Iinclude
NAME := libft.a
OBJ_DIR := obj

CFILES :=				\
	ft_sqrt.c			\
	ft_isdigit_str.c	\
	ft_isalpha.c		\
	ft_isdigit.c		\
	ft_isalnum.c		\
	ft_isascii.c		\
	ft_isprint.c		\
	ft_strlen.c			\
	ft_memset.c			\
	ft_bzero.c			\
	ft_memcpy.c			\
	ft_memmove.c		\
	ft_strlcpy.c		\
	ft_strlcat.c		\
	ft_toupper.c		\
	ft_tolower.c		\
	ft_strchr.c			\
	ft_strrchr.c		\
	ft_strncmp.c		\
	ft_memchr.c			\
	ft_memcmp.c			\
	ft_strnstr.c		\
	ft_atoi.c			\
	ft_calloc.c			\
	ft_strdup.c			\
	ft_substr.c			\
	ft_strjoin.c		\
	ft_strtrim.c		\
	ft_split.c			\
	ft_itoa.c			\
	ft_strmapi.c		\
	ft_striteri.c		\
	ft_putchar_fd.c		\
	ft_putstr_fd.c		\
	ft_putendl_fd.c		\
	ft_putnbr_fd.c		\
	ft_printf/ft_printf.c			\
	ft_printf/specified_formats1.c	\
	ft_printf/specified_formats2.c	\
	ft_printf/tools_printf.c

OBJ_FILES=$(CFILES:%.c=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

$(OBJ_DIR)/%.o: %.c
	mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/ft_printf/%.o: ft_printf/%.c
	mkdir -p $(@D)
	$(CC) $(CFLAGS) -c -I. $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re