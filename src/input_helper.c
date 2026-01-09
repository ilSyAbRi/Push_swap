/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_helper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 15:59:48 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/09 16:07:28 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"


void	print_error()
{
	write(2,"Error\n",6);
}

void	validate_argument_count(int	argc)
{
	if (argc < 2)
		exit(0);
}

int	is_space_char(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return 1;
	return 0;
}

int	string_has_non_space_char(char *str)
{
	int	i = 0;

	while (str[i] != '\0')
	{
		if (is_space_char == 0)
			return 1;
		i++;
	}
	return 0;
}
