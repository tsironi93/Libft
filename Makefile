# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: itsiros <itsiros@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/14 17:34:19 by itsiros           #+#    #+#              #
#    Updated: 2024/10/29 13:15:47 by itsiros          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror -o -I

# Archiver
AR = ar

NAME = libft.a
SRCS = ft_isalpha.c ft_isalnum.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_memset.c \
		ft_strlen.c ft_bzero.c ft_memcpy.c \
		ft_memmove.c ft_strlcat.c ft_toupper.c \
		ft_tolower.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_memchr.c ft_memcmp.c \
		ft_strnstr.c ft_atoi.c ft_calloc.c \
		ft_strdup.c ft_putchar_fd.c ft_putnbr_fd.c \
		ft_substr.c ft_strjoin.c ft_putendl_fd.c \
		ft_putstr_fd.c ft_strmapi.c ft_striteri.c \
		ft_itoa.c ft_strtrim.c ft_strlcpy.c ft_split.c \
		ft_strcmp.c

OBJS = $(SRCS:.c=.o)

# Default target
all: $(NAME)

# Rule to create the library
$(NAME): $(OBJS)
	@$(AR) rcs $(NAME) $(OBJS)

# Rule for object files
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

# Clean target to remove object files
clean:
	@rm -f $(OBJS)

# Fclean target to remove the library and object files
fclean: clean
	@rm -f $(NAME)

# Rebuild target to clean and then build again
re: fclean all

.PHONY: all clean fclean re
