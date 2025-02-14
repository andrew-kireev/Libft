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
CFLAGS = -Wall -Wextra -Werror -O3 -I.
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
	  ft_putstr_fd.c \
	  ft_putnbr_fd.c \
	  ft_atoi.c \
	  ft_strlcat.c \
	  ft_calloc.c \
	  ft_strdup.c \
	  ft_strnstr.c \
	  ft_strmapi.c \
	  ft_strtrim.c \
	  ft_strjoin.c	\
	  ft_substr.c 	\
	  ft_itoa.c 	\
	  ft_split.c	\
	  ft_putendl_fd.c \


BONUS_SRC = ft_lstnew.c \
		  ft_lstdelone.c \
		  ft_lstdel.c \
		  ft_lstsize.c \
		  ft_lstadd_back.c \
		  ft_lstlast.c \
		  ft_lstadd_front.c \
		  ft_lstclear.c \
		  ft_lstiter.c	\
		  ft_lstmap.c	\

OBJ = $(SRC:%.c=%.o)
BONUS_OBJS= $(BONUS_SRC:%.c=%.o)

%.o: %.c
	$(CC) $(FLAGS) $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

%.o:%.c
	gcc -Wall -Wextra -Werror -c $< -o $@

clean:
	@rm -f $(OBJ)
	@rm -f $(BONUS_OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re