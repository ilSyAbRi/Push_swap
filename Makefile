# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/02 05:26:56 by ilsyabri          #+#    #+#              #
#    Updated: 2026/01/20 11:42:45 by ilsyabri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



SRC =	main.c \
		ft_split.c \
		input_checker.c \
		input_helper.c \
		ft_atol.c \
		Set_up.c \
		Set_up_helper.c \
		sort_helper.c \
		op_push.c \
		op_rotate.c \
		op_swap.c  

OBJ = $(SRC:.c=.o)
NAME = push_swap
CFLAG = -Wall -Wextra -Werror

all : $(NAME) 

$(NAME)	: $(OBJ)
	cc $(CFLAG) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all re fclean clean
