/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 15:43:43 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/17 11:01:23 by ilsyabri         ###   ########.fr       */
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

// Set_up_helper.c

void			create_node(t_node *head, t_node **new, int nb);
int				convert_check_set_up(char **numbers, int *ptr, int j,
					int total);
void			append_numbers(char **numbers, int *ptr, t_counters *counter);
t_node			*set_up(char **arr, int count);

// Set_up.c
t_node			*array_to_list(int *arr, int size);
int				is_overflow(long nb);
int				check_duplicate(int *arr, int pos, int nb);
int				count_element(char **arr, int count);

// sort_helper.c
void			free_list(t_node *head);

#endif
