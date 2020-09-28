# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgwyneth <fgwyneth@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/21 14:58:27 by fgwyneth          #+#    #+#              #
#    Updated: 2020/09/28 23:07:18 by fgwyneth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
CFLAGS		= -Wall -Werror -Wextra -I. -c
FILES		= ft_memset.c  \
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
			  ft_putendl_fd.c \
			  ft_strlcat.c \
			  ft_calloc.c \
			  ft_strdup.c \
			  ft_strnstr.c \
			  ft_strmapi.c \
			  ft_strtrim.c \
			  ft_lstnew.c \
			  ft_lstdelone.c \
			  ft_lstdel.c \
			  

OBJ			= $(FILES:%.c=%.o)

all: $(NAME)

copy:
	cp -f libc-funcs/*.c .
	cp -f additional-funcs/*.c .
	cp -f bonus-funcs/*.c .
	cp -f personal-funcs/*.c .

# This won't run if the .o files don't exist or are not modified
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# This won't run if the source files don't exist or are not modified
$(OBJ): $(FILES)
	gcc $(CFLAGS) $(FILES)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@rm -f $(OBJ)

re: fclean all

# I use .PHONY to make sure that gnu make will still run even if files called
# clean / fclean / all and re already exist in the directory
.PHONY: clean fclean all re