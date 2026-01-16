/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 15:43:43 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/16 17:51:50 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct counters
{
	int			i;
	int			j;
	int			total;
}				t_counters;

typedef struct list
{
	int			val;
	struct list	*next;
}				t_node;

// input_helper.c
void			print_error(void);
void			validate_argument_count(int argc);
int				is_number(char c);
int				is_whitespace(char c);
int				is_sign(char c);

// input_checker.c
int				one_sign_before_nb(char *str);
int				only_number(char *str);
int				fully_space(char *str);
void			check_input(int argc, char *argv[]);

// ft_split.c
size_t			ft_count_word(char *str, char c);
size_t			ft_count_letter(char *str, char c);
char			**do_free(char **ptr, size_t j);
char			*ft_allocate(char **arr, char *str, int n);
char			**ft_split(char *arr, char c);

// ft_atol.c
long			ft_atol(char *str);

// Set_up.c
int				set_up(char **arr, int count);
int				count_element(char **arr, int count);
int				check_duplicate(int *arr, int pos, int nb);
int				convert_check_set_up(char **numbers, int *ptr, int j,
					int total);
int				is_overflow(long nb);
void			append_numbers(char **numbers, int *ptr, t_counters *counter);

#endif
