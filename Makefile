# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgwyneth <fgwyneth@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/21 14:58:27 by fgwyneth          #+#    #+#              #
#    Updated: 2020/09/27 17:38:17 by fgwyneth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
CFLAGS		= -Wall -Werror -Wextra -I. -c
FILES		= ft_memset.c  \
			  ft_tolower.c \
			  ft_toupper.c \
			  ft_bzero.c   \
			  ft_memcpy.c  \
			  ft_memccpy.c

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