/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Set_up.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:59:39 by ilsyabri          #+#    #+#             */
/*   Updated: 2026/01/14 18:36:59 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	convert_check_set_up(char **numbers, int *ptr, int j, int total)
{
	long	nb;

	nb = ft_atol(numbers[j]);
	if (is_overflow(nb) || check_duplicate(ptr, total, (int)nb))
	{
		do_free(numbers, j);
		print_error();
	}
	return ((int)nb);
}

void	append_numbers(char **numbers, int *ptr, t_counters *counter)
{
	counter.j = 0;
	while (numbers[counter.j] != NULL)
	{
		ptr[counter.total] = convert_check_set_up(numbers, ptr, counter.j,
				counter.total);
		counter.j++;
		counter.total++;
	}
}

int	set_up(char **arr, int count)
{
	int			*ptr;
	char		**numbers;
	t_counters	counter;

	counter.i = 0;
	counter.total = 0;
	ptr = malloc(sizeof(int) * count_element(arr, count));
	if (ptr == NULL)
		print_error();
	while (counter.i < count)
	{
		numbers = ft_split(arr[counter.i], ' ');
		if (numbers == NULL)
			print_error();
		append_numbers(numbers, ptr, &counter);
		do_free(numbers, counter.j);
		counter.i++;
	}
	return (1);
}
