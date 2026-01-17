# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/02 05:26:56 by ilsyabri          #+#    #+#              #
#    Updated: 2026/01/17 10:58:46 by ilsyabri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



SRC =	push_swap.c \
		ft_split.c \
		input_checker.c \
		input_helper.c

OBJ = $(SRC:.c=.o)
NAME = push_swap.a
CFLAG = -Wall -Wextra -Werror

all : $(NAME) 

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o : %.c
	cc $(CFLAG) -c $< -o $@
clean :
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all re fclean clean
