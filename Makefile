# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/02 05:26:56 by ilsyabri          #+#    #+#              #
#    Updated: 2026/01/02 05:27:24 by ilsyabri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



SRC =	main.c

OBJ = $(SRC:.c=.o)
NAME = libft.a
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
