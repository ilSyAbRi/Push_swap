/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 15:47:04 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/10 19:58:55 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sign(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (is_sign(str[i]))
		{
			count++;
			if (count > 1)
				return (0);
			if (!is_number(str[i + 1]))
				return (0);
		}
		i++;
	}
	return (1);
}

int	not_only_number(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(is_number(str[i]) || is_whitespace(str[i]) || is_sign(str[i])))
			return (1);
		i++;
	}
	return (0);
}

int	fully_space(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_whitespace(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

void	check_input(int argc, char *argv[])
{
	int	i;

	if (argc < 2)
		print_error();
	i = 1;
	while (i < argc)
	{
		if (fully_space(argv[i]) || not_only_number(argv[i]))
			print_error();
		if (check_sign(argv[i]) == 0)
			print_error();
		i++;
	}
}
