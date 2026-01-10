/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_helper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 15:59:48 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/10 18:43:52 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	validate_argument_count(int argc)
{
	if (argc < 2)
		exit(1);
}

int	is_number(char c)
{
	if (c >= '0' && c <= '9')
		return 1;
	return 0;
}

int	is_whitespace(char c)
{
	if (c == ' ' || c >= 9 && c <= 13)
		return (1);
	return (0);
}

int	is_sign(char c)
{
	if (c == '-' || c == '+')
		return 1;
	return 0;
}
