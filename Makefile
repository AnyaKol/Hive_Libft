# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akolupae <akolupae@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/16 15:29:34 by akolupae          #+#    #+#              #
#    Updated: 2025/04/18 13:43:30 by akolupae         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra -g

NAME = libft.a

HDR = libft.h

SRC = \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
#	ft_strlcpy.c \
#	ft_strlcat.c \
#	ft_toupper.c \
#	ft_tolower.c \
#	ft_strchr.c \
#	ft_strrchr.c \
#	ft_strncmp.c \
#	ft_memchr.c \
#	ft_memcmp.c \
#	ft_strnstr.c \
#	ft_atoi.c \
#	ft_calloc.c \
#	ft_strdup.c \
#	ft_substr.c \
#	ft_strjoin.c \
#	ft_strtrim.c \
#	ft_split.c \
#	ft_itoa.c \
#	ft_strmapi.c \
#	ft_striteri.c \
#	ft_putchar_fd.c \
#	ft_putstr_fd.c \
#	ft_putendl_fd.c \
#	ft_putnbr_fd.c \

#B_SRC = \
#	ft_lstnew \
#	ft_lstadd_front \
#	ft_lstsize \
#	ft_lstlast \
#	ft_lstadd_back \
#	ft_lstdelone \
#	ft_lstclear \
#	ft_lstiter \
#	ft_lstmap \

OBJ = $(SRC:.c=.o)
#B_OBJ = $(B_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

%.o: %.c $(HDR)
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJ)

fclean:
	clean rm -f $(NAME)

re: fclean all

#bonus: $(NAME) $(B_OBJ) clean
#	ar -rc $(NAME) $(B_OBJ)
	

.PHONY: all clean fclean re bonus
