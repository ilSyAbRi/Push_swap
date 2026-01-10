/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 15:47:04 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/10 18:59:16 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	one_sign_before_nb(char *str)
{
	int	i;
	int	track;

	i = 0;
	track = 0;
	while (str[i])
	{
		if (is_number(str[i]))
				return 0;
		if (is_sign(str[i]))
		{
			if (str[i] != '\0' && is_number(str[i + 1])
					return 1;
		}
	i++;
	}
}

int	only_number(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(is_number(str[i]) || is_whitespace(str[i]) || is_sign(str[i])))
			return (0);
	}
	return (1);
}

int	fully_space(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_space_char(str[i]) == 0)
			return (1);
		i++;
	}
	return (0);
}

void	check_input(int argc, char *argv[])
{
	validate_argument_count(argc);

	int	i;

	i = 1;
	while (i < argc)
	{
		if (fully_space(argv[i]) == 0 || only_number(argv[i]) == 0)
			print_error();
		if (one_sign_before_nb(str[i]) == 0)
	i++;
	}
}
