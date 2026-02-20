# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kcanales <kcanales@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/20 18:07:21 by kcanales          #+#    #+#              #
#    Updated: 2026/02/20 18:20:45 by kcanales         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME_CLIENT = client
NAME_SERVER = server

CC = cc
CFLAGS = -Wall -Wextra -Werror -g

INCLUDE_DIR = include
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

SRC_DIR = src
SERVER_SRC = $(SRC_DIR)/server.c
CLIENT_SRC = $(SRC_DIR)/client.c

OBJ_SERVER = $(SERVER_SRC:.c=.o)
OBJ_CLIENT = $(CLIENT_SRC:.c=.o)

all: $(LIBFT) $(NAME_SERVER) $(NAME_CLIENT)

$(LIBFT):
	@make -C $(LIBFT_DIR)

%.o: %.c
	@$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

$(NAME_SERVER): $(OBJ_SERVER) $(LIBFT)
	@$(CC) $(CFLAGS) -I$(INCLUDE_DIR) $(OBJ_SERVER) -L$(LIBFT_DIR) -lft -o $(NAME_SERVER)

$(NAME_CLIENT): $(OBJ_CLIENT) $(LIBFT)
	@$(CC) $(CFLAGS) -I$(INCLUDE_DIR) $(OBJ_CLIENT) -L$(LIBFT_DIR) -lft -o $(NAME_CLIENT)

clean:
	@make -C $(LIBFT_DIR) clean
	@rm -f $(OBJ_SERVER) $(OBJ_CLIENT)

fclean: clean
	@make -C $(LIBFT_DIR) fclean
	@rm -f $(NAME_SERVER) $(NAME_CLIENT)

re: fclean all

.PHONY: all clean fclean re
