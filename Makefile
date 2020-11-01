# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgwyneth <fgwyneth@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/21 14:58:27 by fgwyneth          #+#    #+#              #
#    Updated: 2020/10/29 12:27:05 by fgwyneth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Werror -Wextra -I. libft.h -c
SRC = ft_memset.c  \
	  ft_tolower.c \
	  ft_toupper.c \
	  ft_bzero.c   \
	  ft_memcpy.c  \
	  ft_memccpy.c \
	  ft_memmove.c \
	  ft_memchr.c  \
	  ft_memcmp.c  \
	  ft_strlen.c  \
	  ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_strchr.c  \
	  ft_strrchr.c \
	  ft_strncmp.c \
	  ft_strlcpy.c \
	  ft_putchar_fd.c \
	  ft_putchar.c \
	  ft_putstr_fd.c \
	  ft_putnbr_fd.c \
	  ft_atoi.c \
	  ft_strlcat.c \
	  ft_calloc.c \
	  ft_strdup.c \
	  ft_strnstr.c \
	  ft_strmapi.c \
	  ft_strtrim.c \
	  ft_lstnew.c \
	  ft_lstdelone.c \
	  ft_lstdel.c \
	  ft_lstsize.c \
	  ft_lstadd_back.c \
	  ft_lstlast.c \
	  ft_lstadd_front.c \
	  ft_lstclear.c \
	  ft_lstiter.c	\
	  ft_lstmap.c	\
	  ft_strjoin.c	\
	  ft_substr.c 	\
	  ft_itoa.c 	\
	  ft_split.c	\
	  ft_putendl_fd.c \

OBJ			= $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(FILES)
	gcc $(CFLAGS) $(SRC)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@rm -f $(OBJ)

re: fclean all

.PHONY: clean fclean all re