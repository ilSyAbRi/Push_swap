/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 15:43:43 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/12 21:45:14 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

// input_helper.c
void    print_error(void);
void    validate_argument_count(int argc);
int     is_number(char c);
int     is_whitespace(char c);
int     is_sign(char c);

// input_checker.c
int     one_sign_before_nb(char *str);
int     only_number(char *str);
int     fully_space(char *str);
void    check_input(int argc, char *argv[]);


// ft_split.c
size_t	ft_count_word(char *str, char c);
size_t	ft_count_letter(char *str, char c);
char	**do_free(char **ptr, size_t j);
char	*ft_allocate(char **arr, char *str, int n);
char	**ft_split(char *arr, char c);

// ft_atol.c
long	ft_atol(char *str);

// Set_up.c
int	set_up(char **arr, int count,int	i,int	j);
int		count_element(char **arr, int count);
int		check_set_up(char **numbers, int *ptr, int j, int total);
int		check_duplicate(int *arr, int pos, int nb);
int		is_overflow(long nb);

#endif
