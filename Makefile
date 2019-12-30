
# **************************************************************************** #sr
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/30 16:39:05 by vinguyen          #+#    #+#              #
#    Updated: 2019/09/30 17:10:55 by vinguyen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Library name
NAME = libft.a

#Folders containing *.c and *.h files
SRC = .
INCLUDES = .

#Source Files
NAMES = ft_atoi ft_bzero ft_isalnum ft_isalpha ft_isascii ft_isdigit \
		ft_isprint ft_itoa ft_lstadd ft_lstdel ft_lstdelone ft_lstiter \
		ft_lstmap ft_lstnew ft_memalloc ft_memccpy ft_memchr ft_memcmp \
		ft_memcpy ft_memdel ft_memmove ft_memset ft_putchar ft_putchar_fd \
		ft_putendl ft_putendl_fd ft_putnbr ft_putnbr_fd ft_putstr \
		ft_putstr_fd ft_strcat ft_strchr ft_strclr ft_strcmp ft_strcpy \
		ft_strdel ft_strdup ft_strequ ft_striter ft_striteri ft_strjoin \
		ft_strlcat ft_strlen ft_strmap ft_strmapi ft_strncat ft_strncmp \
		ft_strncpy ft_strnequ ft_strnew ft_strnstr ft_strrchr ft_strsplit \
		ft_strstr ft_strsub ft_strtrim ft_tolower ft_toupper \
		ft_strstart ft_strend ft_iswhitespace ft_countwords ft_nbrlen
SRC_FILES = $(addsuffix .c, $(NAMES))
OBJ_FILES = $(addsuffix .o, $(NAMES))

#Compiler
CC = gcc

#Flags
CFLAGS = -g -Wall -Wextra -Werror
SANIT = -fsanitize=address

#Baseline command that compiles all the files
.PHONY: all
all: $(NAME)

#Command that compiles the *.c files, creates the library, and index the files
$(NAME):
	@$(CC) $(CFLAGS) -I $(INCLUDES) -c $(addprefix $(SRC)/, $(SRC_FILES))
	@ar -rc $(NAME) $(OBJ_FILES)
	@ranlib $(NAME)

.PHONY: clean
clean:
	@/bin/rm -rf $(OBJ_FILES)

.PHONY: fclean
fclean: clean
	@if test -e $(NAME); then\
		/bin/rm $(NAME);\
	fi;

#Command that cleans all the files and remakes the library
.PHONY: re
re: fclean all

#Testing code
.PHONY: test
test:
	@gcc fake.c -g $(SANIT)
	@./a.out

#Norminette
.PHONY: Norminette
norm:
	@norminette *.c *.h
