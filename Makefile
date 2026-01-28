# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/02 05:26:56 by ilsyabri          #+#    #+#              #
#    Updated: 2026/01/28 13:51:30 by ilsyabri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



SRC =	main.c \
		ft_split.c \
		ft_atol.c \
		ft_strlen.c \
		input_checker.c \
		input_helper.c \
		Set_up.c \
		Set_up_helper.c \
		op_push.c \
		op_rotate.c \
		op_swap.c \
		op_reverse_rotate.c \
		sort_helper.c \
		sort_helper2.c \
		sort_small.c \
		sort_algo.c

OBJ = $(SRC:.c=.o)
NAME = push_swap
CFLAG = -Wall -Wextra -Werror

all : $(NAME) 

$(NAME)	: $(OBJ)
	cc $(CFLAG) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAG) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all re fclean clean
