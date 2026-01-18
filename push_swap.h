/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 15:43:43 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/18 16:28:11 by ilsyabri         ###   ########.fr       */
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

//	swap		0-0
void    sa(t_node **a);
void    sb(t_node **b);
void    ss(t_node **a, t_node **b);

// sort helper		*)*
void			free_list(t_node *head);

#endif
