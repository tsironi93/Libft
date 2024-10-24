# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: itsiros <itsiros@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/14 17:34:19 by itsiros           #+#    #+#              #
#    Updated: 2024/10/16 00:56:37 by itsiros          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror -o -I

NAME = libft.a
SRCS = ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memset.c ft_strlen.c ft_bzero.c ft_memcpy.c ft_memmove.c
OBJS = $(SRCS:.c=.o)

# Default target
all: $(NAME)

# Rule to create the library
$(NAME): $(OBJS)
	$(AR) rcs $(NAME) $(OBJS)

# Rule for object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean target to remove object files
clean:
	rm -f $(OBJS)

# Fclean target to remove the library and object files
fclean: clean
	rm -f $(NAME)

# Rebuild target to clean and then build again
re: fclean all

.PHONY: all clean fclean re