/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 15:43:43 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/28 17:14:43 by ilsyabri         ###   ########.fr       */
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
	int			index;
	struct list	*next;
}				t_node;

void			print_list(t_node *list);

// main 		*^*
int				main(int argc, char *argv[]);

// input_helper 	&|&
void			print_error(void);
int				is_number(char c);
int				is_whitespace(char c);
int				is_sign(char c);

// input_checker	^!^
int				check_sign(char *str);
int				not_only_number(char *str);
int				fully_space(char *str);
void			check_input(int argc, char *argv[]);

// ft_split		*&*
size_t			ft_count_word(char *str, char c);
size_t			ft_count_letter(char *str, char c);
char			**do_free(char **ptr, size_t j);
char			*ft_allocate(char **arr, char *str, int n);
char			**ft_split(char *arr, char c);

// ft_atol		^#^
long			ft_atol(char *str);

// ft_strlen		(:
int				ft_strlen(char *str);

// set_up		'|'
int				ft_strlen(char *str);
void			append_numbers(char **numbers, int *ptr, t_counters *counter);
t_node			*set_up(char **arr, int count);

// set_up_helper	*(*
void			create_node(t_node *head, t_node **new, int nb);
t_node			*array_to_list(int *arr, int size);
int				is_overflow(long nb);
int				check_duplicate(int *arr, int pos, int nb);
int				count_element(char **arr, int count);

// op_swap		0-0
void			sa(t_node **a);
void			sb(t_node **b);
void			ss(t_node **a, t_node **b);

// op_push		>*<
void			pa(t_node **a, t_node **b);
void			pb(t_node **a, t_node **b);

// op_rotate		}:
void			ra(t_node **a);
void			rb(t_node **b);
void			rr(t_node **a, t_node **b);

// op_reverse_rotate	{:
void			rra(t_node **a);
void			rrb(t_node **b);
void			rrr(t_node **a, t_node **b);

// sort helper		*)*
void			free_list(t_node *head);
int				stack_size(t_node **a);
void			assign_index(t_node **stack);
void			is_sorted(t_node **a);
int				find_max_index(t_node *b);

// sort helper2		*?*
int				find_pos_of_max_index(t_node *tmp, int max_index);
int				find_min_index(t_node *tmp);
int				find_pos_of_min_index(t_node *tmp, int min_index);

// sort small		`^`
void			sort_3(t_node **stack);
void			sort_5(t_node **stack_a, t_node **stack_b);

// sort algo		"_"
void			sort_stack(t_node **a, t_node **b);
void			from_a_to_b(t_node **a, t_node **b, int chunks_size);
void			operation_a_to_b(t_node **a, t_node **b, int track);
void			from_b_to_a(t_node **a, t_node **b);
void			operation_b_to_a(t_node **a, t_node **b, int max_index,
					int pos_of_max_index);

#endif
